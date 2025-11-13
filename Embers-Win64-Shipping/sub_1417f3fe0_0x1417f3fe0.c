// 函数: sub_1417f3fe0
// 地址: 0x1417f3fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* r8 = arg1[8]
void* rbp = &arg1[7]
void* rax_6 = rbp
int64_t rdx_2 = (sx.q((arg2 u>> 0x20).d) ^ sx.q(arg2.d)) & sx.q(arg1[9].d - 1)
int32_t r15 = 0

if (r8 != 0)
    rax_6 = r8

void* r14 = rax_6 + (rdx_2 << 2)
int32_t i = *(rax_6 + (rdx_2 << 2))

while (i != 0xffffffff)
    int64_t* rdi_3 = (sx.q(i) << 5) + *arg1
    int64_t arg_8 = arg2
    int64_t arg_18 = *rdi_3
    
    if (sub_14077a170(&arg_18, &arg_8) != 0)
        int64_t rbx_1 = sx.q(*r14)
        
        if (arg1[1].d != *(arg1 + 0x34))
            void* rdx_4 = *(rbp + 8)
            void* r8_1 = *arg1
            int64_t r9_2 = rbx_1 << 5
            
            if (rdx_4 != 0)
                rbp = rdx_4
            
            void* rdx_6 = ((sx.q(arg1[9].d - 1) & sx.q(*(r9_2 + r8_1 + 0x1c))) << 2) + rbp
            
            for (int32_t j = *rdx_6; j != 0xffffffff; j = *rdx_6)
                if (j == rbx_1.d)
                    *rdx_6 = *(r9_2 + r8_1 + 0x18)
                    break
                
                rdx_6 = r8_1 + 0x18 + (sx.q(j) << 5)
        
        r15 = 1
        int64_t* rdi_4 = *((rbx_1 << 5) + *arg1 + 0x10)
        
        if (rdi_4 != 0)
            rdi_4[1].d -= 1
            
            if (rdi_4[1].d == 1)
                (**rdi_4)(rdi_4)
                int32_t rbp_1 = *(rdi_4 + 0xc)
                *(rdi_4 + 0xc) -= 1
                
                if (rbp_1 == 1)
                    int64_t r8_2 = *rdi_4
                    (*(r8_2 + 8))(rdi_4, 1, r8_2)
        
        sub_1405c36f0(arg1, rbx_1.d, 1)
        break
    
    i = rdi_3[3].d
    r14 = &rdi_3[3]

return zx.q(r15)
