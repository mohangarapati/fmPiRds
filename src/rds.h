
#ifndef RDS_H
#define RDS_H


#include <stdint.h>

extern void get_rds_samples(float *buffer, int count);
extern void set_rds_pi(uint16_t pi_code);
extern void set_rds_rt(char *rt);
extern void set_rds_ps(char *ps);
extern void set_rds_ta(int ta);


#endif /* RDS_H */
