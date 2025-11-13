// 函数: sub_1405e3820
// 地址: 0x1405e3820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rcx

if (arg2[4] == 0)
    rcx = &data_142d40450
else
    rcx = *(arg2 + 8)
    
    if ((rcx.b & 1) != 0)
        rcx = (rcx s>> 1) + &arg2[2]

void* rbx = arg1[8]
void* r15 = &arg1[7]
int32_t r14 = 0
int64_t rcx_3 = sx.q(sub_1405de2b0(rcx)) & sx.q(arg1[9].d - 1)
void* rax_6 = r15

if (rbx != 0)
    rax_6 = rbx

void* rdi = rax_6 + (rcx_3 << 2)
int32_t i = *(rax_6 + (rcx_3 << 2))

while (i != 0xffffffff)
    int32_t* rbx_3 = (sx.q(i) << 6) + *arg1
    
    if (sub_1405dfda0(rbx_3, arg2) != 0)
        int64_t rbx_4 = sx.q(*rdi)
        
        if (arg1[1].d != *(arg1 + 0x34))
            void* rdx_1 = *(r15 + 8)
            void* r8_1 = *arg1
            int64_t r9_2 = rbx_4 << 6
            int64_t rcx_6 = sx.q(arg1[9].d - 1) & sx.q(*(r9_2 + r8_1 + 0x3c))
            
            if (rdx_1 != 0)
                r15 = rdx_1
            
            int32_t j = *(r15 + (rcx_6 << 2))
            void* rdx_2 = r15 + (rcx_6 << 2)
            
            for (; j != 0xffffffff; j = *rdx_2)
                if (j == rbx_4.d)
                    *rdx_2 = *(r9_2 + r8_1 + 0x38)
                    break
                
                rdx_2 = r8_1 + 0x38 + (sx.q(j) << 6)
        
        void* rdi_3 = (rbx_4 << 6) + *arg1
        sub_140a1d5c0(rdi_3 + 0x18)
        sub_140a1d5c0(rdi_3 + 8)
        r14 = 1
        sub_1405c37b0(arg1, rbx_4.d, 1)
        break
    
    i = rbx_3[0xe]
    rdi = &rbx_3[0xe]

return zx.q(r14)
