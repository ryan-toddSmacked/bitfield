#ifndef __BIT_FIELDS_H
#define __BIT_FIELDS_H


#include <stdint.h>


typedef uint8_t  bit8_t;
typedef uint16_t bit16_t;
typedef uint32_t bit32_t;
typedef uint64_t bit64_t;


#define BIT(i) ((uint64_t)1 << ((i) % 64))

#define SETBIT(bf, i)  ((bf) |  (BIT(i)))
#define NULLBIT(bf, i) ((bf) & ~(BIT(i)))

#define ISSET(bf, i)   ((((bf) & (BIT(i))) >= 1) ? (1) : (0))
#define ISNULL(bf, i)  ((((bf) & (BIT(i))) == 0) ? (1) : (0))


#define ONES(bf) \
    (sizeof(bf) == 1) ? (ISSET(bf,0) + ISSET(bf,1) + ISSET(bf,2) + ISSET(bf,3) + ISSET(bf,4) + ISSET(bf,5) + ISSET(bf,6) + ISSET(bf,7)) : (\
    (sizeof(bf) == 2) ? (ISSET(bf,0) + ISSET(bf,1) + ISSET(bf,2) + ISSET(bf,3) + ISSET(bf,4) + ISSET(bf,5) + ISSET(bf,6) + ISSET(bf,7) + ISSET(bf,8) + ISSET(bf,9) + ISSET(bf,10) + ISSET(bf,11) + ISSET(bf,12) + ISSET(bf,13) + ISSET(bf,14) + ISSET(bf,15)) : (\
    (sizeof(bf) == 4) ? (ISSET(bf,0) + ISSET(bf,1) + ISSET(bf,2) + ISSET(bf,3) + ISSET(bf,4) + ISSET(bf,5) + ISSET(bf,6) + ISSET(bf,7) + ISSET(bf,8) + ISSET(bf,9) + ISSET(bf,10) + ISSET(bf,11) + ISSET(bf,12) + ISSET(bf,13) + ISSET(bf,14) + ISSET(bf,15) + ISSET(bf,16) + ISSET(bf,17) + ISSET(bf,18) + ISSET(bf,19) + ISSET(bf,20) + ISSET(bf,21) + ISSET(bf,22) + ISSET(bf,23) + ISSET(bf,24) + ISSET(bf,25) + ISSET(bf,26) + ISSET(bf,27) + ISSET(bf,28) + ISSET(bf,29) + ISSET(bf,30) + ISSET(bf,31)) : (\
    (sizeof(bf) == 8) ? (ISSET(bf,0) + ISSET(bf,1) + ISSET(bf,2) + ISSET(bf,3) + ISSET(bf,4) + ISSET(bf,5) + ISSET(bf,6) + ISSET(bf,7) + ISSET(bf,8) + ISSET(bf,9) + ISSET(bf,10) + ISSET(bf,11) + ISSET(bf,12) + ISSET(bf,13) + ISSET(bf,14) + ISSET(bf,15) + ISSET(bf,16) + ISSET(bf,17) + ISSET(bf,18) + ISSET(bf,19) + ISSET(bf,20) + ISSET(bf,21) + ISSET(bf,22) + ISSET(bf,23) + ISSET(bf,24) + ISSET(bf,25) + ISSET(bf,26) + ISSET(bf,27) + ISSET(bf,28) + ISSET(bf,29) + ISSET(bf,30) + ISSET(bf,31) + ISSET(bf,32) + ISSET(bf,33) + ISSET(bf,34) + ISSET(bf,35) + ISSET(bf,36) + ISSET(bf,37) + ISSET(bf,38) + ISSET(bf,39) + ISSET(bf,40) + ISSET(bf,41) + ISSET(bf,42) + ISSET(bf,43) + ISSET(bf,44) + ISSET(bf,45) + ISSET(bf,46) + ISSET(bf,47) + ISSET(bf,48) + ISSET(bf,49) + ISSET(bf,50) + ISSET(bf,51) + ISSET(bf,52) + ISSET(bf,53) + ISSET(bf,54) + ISSET(bf,55) + ISSET(bf,56) + ISSET(bf,57) + ISSET(bf,58) + ISSET(bf,59) + ISSET(bf,60) + ISSET(bf,61) + ISSET(bf,62) + ISSET(bf,63)) : (0))))

#define ZEROS(bf) \
    (sizeof(bf) == 1) ? (ISNULL(bf,0) + ISNULL(bf,1) + ISNULL(bf,2) + ISNULL(bf,3) + ISNULL(bf,4) + ISNULL(bf,5) + ISNULL(bf,6) + ISNULL(bf,7)) : (\
    (sizeof(bf) == 2) ? (ISNULL(bf,0) + ISNULL(bf,1) + ISNULL(bf,2) + ISNULL(bf,3) + ISNULL(bf,4) + ISNULL(bf,5) + ISNULL(bf,6) + ISNULL(bf,7) + ISNULL(bf,8) + ISNULL(bf,9) + ISNULL(bf,10) + ISNULL(bf,11) + ISNULL(bf,12) + ISNULL(bf,13) + ISNULL(bf,14) + ISNULL(bf,15)) : (\
    (sizeof(bf) == 4) ? (ISNULL(bf,0) + ISNULL(bf,1) + ISNULL(bf,2) + ISNULL(bf,3) + ISNULL(bf,4) + ISNULL(bf,5) + ISNULL(bf,6) + ISNULL(bf,7) + ISNULL(bf,8) + ISNULL(bf,9) + ISNULL(bf,10) + ISNULL(bf,11) + ISNULL(bf,12) + ISNULL(bf,13) + ISNULL(bf,14) + ISNULL(bf,15) + ISNULL(bf,16) + ISNULL(bf,17) + ISNULL(bf,18) + ISNULL(bf,19) + ISNULL(bf,20) + ISNULL(bf,21) + ISNULL(bf,22) + ISNULL(bf,23) + ISNULL(bf,24) + ISNULL(bf,25) + ISNULL(bf,26) + ISNULL(bf,27) + ISNULL(bf,28) + ISNULL(bf,29) + ISNULL(bf,30) + ISNULL(bf,31)) : (\
    (sizeof(bf) == 8) ? (ISNULL(bf,0) + ISNULL(bf,1) + ISNULL(bf,2) + ISNULL(bf,3) + ISNULL(bf,4) + ISNULL(bf,5) + ISNULL(bf,6) + ISNULL(bf,7) + ISNULL(bf,8) + ISNULL(bf,9) + ISNULL(bf,10) + ISNULL(bf,11) + ISNULL(bf,12) + ISNULL(bf,13) + ISNULL(bf,14) + ISNULL(bf,15) + ISNULL(bf,16) + ISNULL(bf,17) + ISNULL(bf,18) + ISNULL(bf,19) + ISNULL(bf,20) + ISNULL(bf,21) + ISNULL(bf,22) + ISNULL(bf,23) + ISNULL(bf,24) + ISNULL(bf,25) + ISNULL(bf,26) + ISNULL(bf,27) + ISNULL(bf,28) + ISNULL(bf,29) + ISNULL(bf,30) + ISNULL(bf,31) + ISNULL(bf,32) + ISNULL(bf,33) + ISNULL(bf,34) + ISNULL(bf,35) + ISNULL(bf,36) + ISNULL(bf,37) + ISNULL(bf,38) + ISNULL(bf,39) + ISNULL(bf,40) + ISNULL(bf,41) + ISNULL(bf,42) + ISNULL(bf,43) + ISNULL(bf,44) + ISNULL(bf,45) + ISNULL(bf,46) + ISNULL(bf,47) + ISNULL(bf,48) + ISNULL(bf,49) + ISNULL(bf,50) + ISNULL(bf,51) + ISNULL(bf,52) + ISNULL(bf,53) + ISNULL(bf,54) + ISNULL(bf,55) + ISNULL(bf,56) + ISNULL(bf,57) + ISNULL(bf,58) + ISNULL(bf,59) + ISNULL(bf,60) + ISNULL(bf,61) + ISNULL(bf,62) + ISNULL(bf,63)) : (0))))

#endif
