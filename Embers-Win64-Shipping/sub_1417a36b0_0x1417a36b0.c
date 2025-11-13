// 函数: sub_1417a36b0
// 地址: 0x1417a36b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
void* rcx = *arg1
int64_t r12_1 = rbp << 4
int64_t rsi = *(rcx + 0x198)
sub_1417a7f60(rcx, *arg1[1], rbp.d)
void* rdi = *arg1
float arg_8

if (*(rdi + 0x900) != 0)
    arg_8 = rbp.d
    void* rcx_1 = rdi + 0x920
    void* rax_1 = *(rdi + 0x910)
    
    if (rax_1 != 0)
        rcx_1 = rax_1
    
    (*(rdi + 0x900))((*(*rcx_1 + 8))(rcx_1), &arg_8)
    rdi = *arg1

void* rcx_3 = rdi + 0x50
int64_t rbx = *(rdi + 0x198)
void* rax_5 = *(rdi + 0x40)
arg_8 = (*arg1[1])[0]

if (rax_5 != 0)
    rcx_3 = rax_5

(*(rdi + 0x30))((*(*rcx_3 + 8))(rcx_3), rbx + r12_1, &arg_8)
sub_1417a8780(*arg1, *arg1[1], rbp.d)
void* rbx_2 = *arg1

if (*(rbx_2 + 0x940) != 0)
    arg_8 = rbp.d
    void* rcx_6 = rbx_2 + 0x960
    void* rax_9 = *(rbx_2 + 0x950)
    
    if (rax_9 != 0)
        rcx_6 = rax_9
    
    (*(rbx_2 + 0x940))((*(*rcx_6 + 8))(rcx_6), &arg_8)

int64_t* r15 = *(r12_1 + rsi)
int64_t rbp_1 = 0
uint64_t r13_1 = sx.q(*(r12_1 + rsi + 8)) << 3 u>> 3

if (r15 u> &r15[sx.q(*(r12_1 + rsi + 8))])
    r13_1 = 0

if (r13_1 != 0)
    do
        int64_t* rax_14 = *r15
        int64_t* rbx_3 = nullptr
        
        if (*(rax_14 + 0xc) u>= 2)
            rbx_3 = rax_14
        
        if (rbx_3 != 0)
            void* r10_1 = *rbx_3
            int64_t r11_1 = sx.q(rbx_3[1].d)
            
            if (*(r11_1 + *(r10_1 + 0x398)) == 4)
                void* rcx_8 = *arg1
                int64_t r9_1 = sx.q(rbx_3[2].d)
                void* rdx_3 = rcx_8
                void* rdi_1 = *(*(rcx_8 + 0x208) + (r9_1 << 3))
                int32_t rax_17 = r9_1.d
                
                if (rdi_1 != 0)
                    int64_t rax_18 = *(r10_1 + 0x1b8)
                    int64_t r11_2 = r11_1 * 3
                    float zmm0[0x2] = *(rax_18 + (r11_2 << 2) + 4)
                    float zmm2 = *(rax_18 + (r11_2 << 2))
                    float zmm1_2 = *(rax_18 + (r11_2 << 2) + 8)
                    rax_17 = r9_1.d
                    zmm0[0] = zmm0[0] * zmm0[0]
                    
                    if (not(zmm2 * zmm2 + zmm0[0] + zmm1_2 * zmm1_2 f>= *(rdi_1 + 0x1c)))
                        int64_t rax_19 = *(r10_1 + 0x1d0)
                        zmm0 = *(rax_19 + (r11_2 << 2) + 4)
                        zmm2 = *(rax_19 + (r11_2 << 2))
                        zmm1_2 = *(rax_19 + (r11_2 << 2) + 8)
                        rax_17 = r9_1.d
                        zmm0[0] = zmm0[0] * zmm0[0]
                        
                        if (not(zmm2 * zmm2 + zmm0[0] + zmm1_2 * zmm1_2 f>= *(rdi_1 + 0x20)))
                            int64_t rax_20 = *(rcx_8 + 0x238)
                            *(rax_20 + (r9_1 << 2)) += 1
                            rax_17 = rbx_3[2].d
                            rdx_3 = *arg1
                
                int64_t r8_3 = *(rdx_3 + 0x238)
                int64_t rcx_9 = sx.q(rax_17)
                
                if (*(r8_3 + (rcx_9 << 2)) s> data_1439b8eac)
                    *(r8_3 + (rcx_9 << 2)) = 0
                    int64_t* rdi_3 = *arg1[2] + r12_1
                    int64_t rsi_1 = sx.q(rdi_3[1].d)
                    int32_t rax_23 = (rsi_1 + 1).d
                    rdi_3[1].d = rax_23
                    
                    if (rax_23 s> *(rdi_3 + 0xc))
                        sub_1405a4d70(rdi_3)
                    
                    *(*rdi_3 + (rsi_1 << 3)) = rbx_3
                
                if (_isnan(_mm_cvtps_pd(*(*(*rbx_3 + 0x3c8) + sx.q(rbx_3[1].d) * 0xc))) != 0)
                label_1417a397f:
                    int64_t* rdi_5 = *arg1[2] + r12_1
                    int64_t rsi_2 = sx.q(rdi_5[1].d)
                    int32_t rax_35 = (rsi_2 + 1).d
                    rdi_5[1].d = rax_35
                    
                    if (rax_35 s> *(rdi_5 + 0xc))
                        sub_1405a4d70(rdi_5)
                    
                    *(*rdi_5 + (rsi_2 << 3)) = rbx_3
                else
                    if (_isnan(_mm_cvtps_pd(*(*(*rbx_3 + 0x3c8) + sx.q(rbx_3[1].d) * 0xc + 4)))
                            != 0)
                        goto label_1417a397f
                    
                    if (_isnan(_mm_cvtps_pd(*(*(*rbx_3 + 0x3c8) + sx.q(rbx_3[1].d) * 0xc + 8)))
                            != 0)
                        goto label_1417a397f
        
        r15 = &r15[1]
        rbp_1 += 1
    while (rbp_1 != r13_1)

void* rcx_15 = *arg1
int64_t rbx_4 = *arg1[3]
char result = sub_141780090(rcx_15 + 0x110, arg2, rcx_15 + 0x200)
*(rbp + rbx_4) = result
return result
