// 函数: sub_1426a6560
// 地址: 0x1426a6560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
void* i = arg3
*(arg1 + 0xc8) = 0
arg1[0x34] = 0
arg1[0x35] = 8

if (arg3 != 0)
    do
        int64_t arg_8
        sub_140d3a3a0(&arg_8, i)
        int64_t rdi_1 = arg_8
        int64_t var_38_1 = -1
        sub_140bd9620(arg2, arg2[1].d - *(arg2 + 0x34), 0)
        int64_t r9_1 = sx.q(arg2[9].d)
        
        if (r9_1.d != 0)
            void* rdx_3 = arg2[8]
            void* r8 = &arg2[7]
            
            if (rdx_3 != 0)
                r8 = rdx_3
            
            int32_t j = *(r8 + (((sx.q((rdi_1 u>> 0x20).d) ^ sx.q(rdi_1.d)) & (r9_1 - 1)) << 2))
            var_38_1:4.d = j
            var_38_1.d = j
            
            if (j != 0xffffffff)
                var_38_1.d = j
                
                do
                    int64_t arg_18 = rdi_1
                    int64_t rcx_5 = sx.q(j) * 3
                    int64_t rax_6 = *arg2
                    j = *(rax_6 + (rcx_5 << 3) + 0x10)
                    int64_t arg_20 = *(rax_6 + (rcx_5 << 3))
                    
                    if (sub_14077a170(&arg_20, &arg_18) != 0)
                        break
                    
                    var_38_1.d = j
                while (j != 0xffffffff)
                
                var_38_1:4.d = j
        
        int64_t rbx_1 = sx.q(arg1[0x34])
        int32_t rax_9 = (rbx_1 + 1).d
        arg1[0x34] = rax_9
        
        if (rax_9 s> arg1[0x35])
            sub_141a63ee0(&arg1[2], rbx_1.d)
        
        void* rax_10 = *(arg1 + 0xc8)
        int64_t rcx_8 = rbx_1 * 3
        void* rdx_6 = &arg1[2]
        
        if (rax_10 != 0)
            rdx_6 = rax_10
        
        *(rdx_6 + (rcx_8 << 3)) = arg2.o
        *(rdx_6 + (rcx_8 << 3) + 0x10) = var_38_1
        i = *(i + 0x30)
    while (i != 0)

int64_t r8_1 = sx.q(*arg1)
void* rdx_7 = &arg1[2]
void* rax_11 = *(rdx_7 + 0xc0)

if (rax_11 != 0)
    rdx_7 = rax_11

if (*(rdx_7 + r8_1 * 0x18 + 0x10) == 0xffffffff && r8_1.d s< arg1[0x34] - 1)
    *arg1 = (r8_1 + 1).d
    sub_1426c1000(arg1)

return arg1
