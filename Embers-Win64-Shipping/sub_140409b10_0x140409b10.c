// 函数: sub_140409b10
// 地址: 0x140409b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
void* var_48
int64_t rax_1 = __security_cookie ^ &var_48
int64_t rax_2 = sx.q(arg6)
int64_t r14 = sx.q(arg4)
void* r12 = arg3
int64_t r15 = rax_2 << 2
int32_t r13_1 = rax_2.d - arg5
int64_t rax_3 = r15 + 0xf
var_48 = arg3
void* rdi = arg1

if (rax_3 u<= r15)
    rax_3 = 0xffffffffffffff0

int64_t rax_4 = rax_3 & 0xfffffffffffffff0
__chkstk(rax_4)
void var_78
void* rsp_1 = &var_78 - rax_4
float* rbx = nullptr

if (r14.d != 0)
    int64_t r10_1 = 0
    
    if (rax_2 s>= 4)
        void* rcx = rsp_1 + 0x34
        void* rdx_1 = rdi - (rsp_1 + 0x30)
        int64_t i_6 = ((rax_2 - 4) u>> 2) + 1
        r10_1 = i_6 << 2
        int64_t i
        
        do
            int32_t rax_5 = *(rdx_1 + rcx - 4)
            rcx += 0x10
            *(rcx - 0x14) = rax_5
            *(rcx - 0x10) = *(rdx_1 + rcx - 0x10)
            *(rcx - 0xc) = *(rdx_1 + rcx - 0xc)
            *(rcx - 8) = *(rdx_1 + rcx - 8)
            i = i_6
            i_6 -= 1
        while (i != 1)
    
    if (r10_1 s< rax_2)
        void* rcx_1 = rsp_1 + 0x30 + (r10_1 << 2)
        int64_t i_5 = rax_2 - r10_1
        int64_t i_1
        
        do
            int32_t rax_9 = *(rcx_1 + rdi - (rsp_1 + 0x30))
            rcx_1 += 4
            *(rcx_1 - 4) = rax_9
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
    
    int64_t r11_1 = 0
    
    if (r14 s>= 4)
        void* rcx_2 = r12 + 4
        void* r12_2 = rdi - var_48
        void* r14_2 = rsp_1 + 0x30 - var_48
        void* rdx_4 = r15 - 4 + rsp_1 + 0x30
        void* r10_3 = rdi - (rsp_1 + 0x30)
        int64_t i_8 = ((r14 - 4) u>> 2) + 1
        r11_1 = i_8 << 2
        int64_t i_2
        
        do
            float zmm0 = *(rcx_2 + r12_2 - 4)
            void* rax_10 = rcx_2 + r14_2
            rdx_4 -= 0x10
            rcx_2 += 0x10
            *(rcx_2 + r14_2 - 0x14) = zmm0 f* *(rcx_2 - 0x14)
            *(rdx_4 + 0x10) = *(r10_3 + rdx_4 + 0x10) f* *(rcx_2 - 0x14)
            *rax_10 = *(rax_10 + r10_3) f* *(rcx_2 - 0x10)
            *(rdx_4 + 0xc) = *(r10_3 + rdx_4 + 0xc) f* *(rcx_2 - 0x10)
            *(rcx_2 + r14_2 - 0xc) = *(rcx_2 + r12_2 - 0xc) f* *(rcx_2 - 0xc)
            *(rdx_4 + 8) = *(r10_3 + rdx_4 + 8) f* *(rcx_2 - 0xc)
            *(rcx_2 + r14_2 - 8) = *(rcx_2 + r12_2 - 8) f* *(rcx_2 - 8)
            *(rdx_4 + 4) = *(r10_3 + rdx_4 + 4) f* *(rcx_2 - 8)
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
        r12 = var_48
    
    if (r11_1 s< r14)
        void* rdi_1 = rdi - (rsp_1 + 0x30)
        void* rcx_3 = r12 + (r11_1 << 2)
        int64_t i_7 = r14 - r11_1
        void* rdx_8 = rsp_1 + 0x30 + ((rax_2 - r11_1 - 1) << 2)
        int64_t i_3
        
        do
            float* rax_11 = rcx_3 + rsp_1 + 0x30 - r12
            rdx_8 -= 4
            rcx_3 += 4
            *rax_11 = *(rax_11 + rdi_1) f* *(rcx_3 - 4)
            *(rdx_8 + 4) = *(rdx_8 + rdi_1 + 4) f* *(rcx_3 - 4)
            i_3 = i_7
            i_7 -= 1
        while (i_3 != 1)
    
    rdi = rsp_1 + 0x30

int64_t i_4 = sx.q(arg5)
*(rsp_1 + 0x20) = (i_4 + 1).d
sub_140400670(rdi, rdi, arg2, zx.q(r13_1))
int64_t r15_3 = sx.q(r13_1)

if (i_4.d s>= 0)
    int64_t r9_2 = r15_3
    int64_t r11_3 = rax_2 - r15_3
    int64_t r14_4 = neg.q(r15_3)
    int64_t r8_6 = 4
    
    do
        float zmm2_1 = (zx.o(0)).d
        int64_t r10_6 = r9_2
        
        if (r9_2 s< rax_2)
            float zmm0_1
            
            if (r11_3 s>= 4)
                int64_t rcx_5 = r9_2 + r14_4
                void* rdx_10 = rdi + ((r9_2 - rcx_5 + 2) << 2)
                int64_t j_2 = ((rax_2 - rcx_5 - r15_3 - 4) u>> 2) + 1
                r10_6 = r9_2 + (j_2 << 2)
                int64_t j
                
                do
                    float zmm1_1 = *(rdx_10 + r8_6 - 0xc)
                    zmm0_1 = *(rdx_10 + r8_6 - 8)
                    rdx_10 += 0x10
                    zmm2_1 = zmm1_1 f* *(rdx_10 - 0x18) + zmm2_1 + zmm0_1 f* *(rdx_10 - 0x14)
                        + *(rdx_10 + r8_6 - 0x14) f* *(rdx_10 - 0x10)
                        + *(rdx_10 + r8_6 - 0x10) f* *(rdx_10 - 0xc)
                    j = j_2
                    j_2 -= 1
                while (j != 1)
            
            if (r10_6 s< rax_2)
                void* rax_21 = rdi + (r10_6 << 2)
                int64_t j_3 = rax_2 - r10_6
                int64_t j_1
                
                do
                    zmm0_1 = *(rbx + rax_21)
                    rax_21 += 4
                    zmm2_1 = zmm0_1 f* *(rax_21 - 4) + zmm2_1
                    j_1 = j_3
                    j_3 -= 1
                while (j_1 != 1)
        
        zmm2_1 = zmm2_1 f+ *(arg2 + r8_6 - 4)
        r9_2 += 1
        r8_6 += 4
        r11_3 -= 1
        rbx -= 4
        *(arg2 + r8_6 - 8) = zmm2_1
    while (r9_2 + r14_4 s<= i_4)

__security_check_cookie(rax_1 ^ &var_48)
return 0
