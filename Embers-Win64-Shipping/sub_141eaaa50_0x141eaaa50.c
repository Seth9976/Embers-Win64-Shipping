// 函数: sub_141eaaa50
// 地址: 0x141eaaa50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int64_t arg_8 = rax
int64_t arg_18 = rax
int64_t* var_40 = &arg_8
int64_t* var_30 = &arg_18
int64_t (* var_48)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = sub_140cf2f50
void* rcx = arg1[1]
int64_t (* var_38)(int64_t* arg1, int64_t* arg2) = sub_140cf2f40
int32_t rax_1 = sub_141e9f780(rcx, arg2, &arg1[2], &var_38, &var_48)
int32_t rbx = rax_1

if (rax_1 == 0xffffffff)
    rax_1.b = 0
    return rax_1

int32_t i = 1
sub_140cfb1f0(arg1, rax_1, 1)
int32_t rdi = rol.d(1, rbx.b)

do
    int64_t* r10_1 = arg1[1]
    
    if (rbx s>= 0 && rbx s< r10_1[5].d)
        void* rax_3 = r10_1[4]
        void* rcx_3 = &r10_1[2]
        
        if (rax_3 != 0)
            rcx_3 = rax_3
        
        int32_t rax_4 = rbx
        
        if (rbx s< 0)
            rax_4 = rbx + 0x1f
        
        if ((*(rcx_3 + (sx.q(rax_4 s>> 5) << 2)) & rdi) != 0)
            void* rdx_1 = r10_1[8]
            void* r8_1 = &r10_1[7]
            int32_t r9_1 = arg1[4].d
            int64_t r11_1 = *r10_1
            int64_t r14_2 = sx.q(r9_1 * rbx) + r11_1
            int64_t rcx_5 = sx.q(*(sx.q(*(arg1 + 0x14)) + r14_2)) & sx.q(r10_1[9].d - 1)
            
            if (rdx_1 != 0)
                r8_1 = rdx_1
            
            void* rax_12 = r8_1 + (rcx_5 << 2)
            
            for (int32_t j = *(r8_1 + (rcx_5 << 2)); j != 0xffffffff; j = *rax_12)
                int64_t rdx_2 = sx.q(arg1[2].d)
                
                if (j == rbx)
                    *rax_12 = *(rdx_2 + r14_2)
                    break
                
                rax_12 = sx.q(r9_1 * j) + r11_1 + rdx_2
            
            sub_140d0cb70(r10_1, arg1 + 0x1c, rbx, 1)
            i -= 1
    
    rbx += 1
    rdi = rol.d(rdi, 1)
while (i != 0)

int64_t* rax_2
rax_2.b = 1
return rax_2
