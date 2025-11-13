// 函数: sub_1408e6690
// 地址: 0x1408e6690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
void* lpCriticalSection = &arg1[0x18]
void** rdi = arg1
EnterCriticalSection(lpCriticalSection)
float zmm0[0x4] = *(arg2 + 0x43c)
float zmm1[0x4] = 0xc6610000

if (not(zmm0[0] < -14400f))
    zmm1 = __minss_xmmss_memss(zmm0[0], 0x46610000)

zmm1[0] = zmm1[0] f+ *(arg2 + 0x448)
zmm0 = *(arg2 + 0x478)
char r9 = *(arg2 + 0x439)
void* rcx_1 = *rdi
zmm0[0] = zmm0[0] f* *data_143cec070
int32_t* var_60 = nullptr
int32_t var_58 = 0
zmm0[0] = zmm0[0] + zmm1[0]
float temp0_2[0x4] = _mm_max_ss(zmm1[0], zmm0[0])
sub_1408e4340(rcx_1, _mm_min_ss(zmm1[0], zmm0[0]), temp0_2, r9, &var_60)
int32_t* r12 = var_60
int64_t rbp = 0
int64_t rdx = sx.q(var_58)
int32_t* arg_10 = r12
void* rcx_2 = &r12[rdx]
uint64_t r15_3 = (rcx_2 - r12 + 3) u>> 2

if (r12 u> rcx_2)
    r15_3 = 0

if (r15_3 != 0)
    do
        int32_t* rdx_1 = rdi[1]
        int64_t r8_1 = sx.q(rdi[2].d)
        int32_t* rax_1 = rdx_1
        int32_t i = *r12
        void* rcx_3 = &rdx_1[r8_1]
        
        if (rdx_1 != rcx_3)
            while (*rax_1 != i)
                rax_1 = &rax_1[1]
                
                if (rax_1 == rcx_3)
                    goto label_1408e67ab
        
        if (rdx_1 == rcx_3 || ((rax_1 - rdx_1) s>> 2).d == 0xffffffff)
        label_1408e67ab:
            int32_t rax_4 = (r8_1 + 1).d
            rdi[2].d = rax_4
            
            if (rax_4 s> *(rdi + 0x14))
                sub_1405a4cf0(&rdi[1])
            
            *(rdi[1] + (r8_1 << 2)) = i
        
        r12 = &r12[1]
        rbp += 1
    while (rbp != r15_3)
    
    r12 = var_60
    rdx = zx.q(var_58)
    arg_10 = r12

int64_t result = sx.q(rdx.d)
int64_t r15_4 = 0
int64_t arg_18 = 0
void* rcx_5 = &r12[result]
uint64_t r13_3 = (rcx_5 - r12 + 3) u>> 2

if (r12 u> rcx_5)
    r13_3 = 0

uint64_t arg_20 = r13_3

if (r13_3 != 0)
    int64_t* rbx = arg_8
    int64_t* rsi_1 = &rbx[3]
    
    do
        int64_t rbp_1 = sx.q(*r12)
        sub_1408e6bf0(rbx)
        int64_t rcx_7 = *rsi_1
        result = sx.q(rsi_1[1].d)
        int64_t rdx_3 = rcx_7 + (result << 2)
        
        if (rcx_7 == rdx_3)
        label_1408e6861:
            int32_t* r8_2 = rbx[0x11]
            int64_t rdx_4 = sx.q(rbx[0x12].d)
            int32_t* rax_6 = r8_2
            void* rcx_8 = &r8_2[rdx_4]
            
            if (r8_2 == rcx_8)
            label_1408e688d:
                int32_t* r8_3 = rbx[0xf]
                int64_t rdx_5 = sx.q(rbx[0x10].d)
                int32_t* rax_7 = r8_3
                void* rcx_9 = &r8_3[rdx_5]
                
                if (r8_3 != rcx_9)
                    do
                        if (*rax_7 == rbp_1.d)
                            if (rdx_5.d != 0)
                                int32_t r12_2 = 0
                                int32_t rsi_3 = 0
                                int64_t rdi_2 = 0
                                r13_3.b = *r8_3 != rbp_1.d
                                
                                do
                                    int64_t r9_2 = sx.q(rsi_3)
                                    rdi_2 += 1
                                    rsi_3 += 1
                                    
                                    if (rdi_2 s< rdx_5)
                                        int64_t rcx_13 = rbx[0xf] + (rdi_2 << 2)
                                        
                                        do
                                            int32_t rax_12
                                            rax_12.b = *rcx_13 != rbp_1.d
                                            
                                            if (zx.d(r13_3.b) != rax_12)
                                                break
                                            
                                            rsi_3 += 1
                                            rdi_2 += 1
                                            rcx_13 += 4
                                        while (rdi_2 s< rdx_5)
                                    
                                    int32_t r15_8 = rsi_3 - r9_2.d
                                    
                                    if (r13_3.b != 0)
                                        if (r12_2 != r9_2.d)
                                            int64_t rcx_14 = rbx[0xf]
                                            memmove(rcx_14 + (sx.q(r12_2) << 2), 
                                                rcx_14 + (r9_2 << 2), r15_8 << 2)
                                        
                                        r12_2 += r15_8
                                    
                                    r13_3.b ^= 1
                                while (rdi_2 s< rdx_5)
                                
                                r15_4 = arg_18
                                r13_3 = arg_20
                                rbx[0x10].d = r12_2
                                r12 = arg_10
                            
                            break
                        
                        rax_7 = &rax_7[1]
                    while (rax_7 != rcx_9)
                
                arg_8.d = rbp_1.d
                int32_t* rsi_7 = rbp_1 * 0x30 + *(*rbx + 0x68)
                int64_t* rax_15 = sub_1408d9420(&rbx[5], &arg_8)
                *(rax_15 + 0xc) = 0
                *rax_15 = 0
                rax_15[1].d = *rsi_7
                rax_15[2] = 0
                *rax_15 = sub_140a82f30(sx.q(*rsi_7), 0)
                sub_140bc7fd0(&rsi_7[4], rax_15, 1)
                rsi_1 = &rbx[3]
            else
                while (*rax_6 != rbp_1.d)
                    rax_6 = &rax_6[1]
                    
                    if (rax_6 == rcx_8)
                        goto label_1408e688d
                
                if (rdx_4.d != 0)
                    int32_t r12_1 = 0
                    int32_t rsi_2 = 0
                    int64_t rdi_1 = 0
                    r13_3.b = *r8_2 != rbp_1.d
                    
                    do
                        int64_t r9_1 = sx.q(rsi_2)
                        rdi_1 += 1
                        rsi_2 += 1
                        
                        if (rdi_1 s< rdx_4)
                            int64_t rcx_10 = rbx[0x11] + (rdi_1 << 2)
                            
                            do
                                int32_t rax_9
                                rax_9.b = *rcx_10 != rbp_1.d
                                
                                if (zx.d(r13_3.b) != rax_9)
                                    break
                                
                                rsi_2 += 1
                                rdi_1 += 1
                                rcx_10 += 4
                            while (rdi_1 s< rdx_4)
                        
                        int32_t r15_6 = rsi_2 - r9_1.d
                        
                        if (r13_3.b != 0)
                            if (r12_1 != r9_1.d)
                                int64_t rcx_11 = rbx[0x11]
                                memmove(rcx_11 + (sx.q(r12_1) << 2), rcx_11 + (r9_1 << 2), 
                                    r15_6 << 2)
                            
                            r12_1 += r15_6
                        
                        r13_3.b ^= 1
                    while (rdi_1 s< rdx_4)
                    
                    r15_4 = arg_18
                    r13_3 = arg_20
                    rbx[0x12].d = r12_1
                    r12 = arg_10
                    rsi_1 = &rbx[3]
            
            int64_t rdi_4 = sx.q(rsi_1[1].d)
            int32_t rax_17 = (rdi_4 + 1).d
            rsi_1[1].d = rax_17
            
            if (rax_17 s> *(rsi_1 + 0xc))
                sub_1405a4cf0(rsi_1)
            
            result = *rsi_1
            *(result + (rdi_4 << 2)) = rbp_1.d
        else
            while (*rcx_7 != rbp_1.d)
                rcx_7 += 4
                
                if (rcx_7 == rdx_3)
                    goto label_1408e6861
        
        r12 = &r12[1]
        r15_4 += 1
        arg_10 = r12
        arg_18 = r15_4
    while (r15_4 != r13_3)
    
    r12 = var_60

if (r12 != 0)
    result = sub_140a74f90(r12)

if (lpCriticalSection == 0)
    return result

return LeaveCriticalSection(lpCriticalSection)
