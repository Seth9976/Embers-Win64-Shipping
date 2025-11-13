// 函数: sub_141f720b0
// 地址: 0x141f720b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
int32_t result = sub_141f6b830(arg1)
void* rdi = arg1[0xb6]
int64_t* rdi_1

if (rdi == 0)
    void* rdi_2 = arg1[0x86]
    
    if (rdi_2 != 0)
        rdi_1 = *(rdi_2 + 0x58)
        goto label_141f720f0
else
    rdi_1 = *(rdi + 0x40)
label_141f720f0:
    
    if (rdi_1 != 0 && rsi.d s>= 0 && rsi.d s< arg1[0xaf].d && rsi.d s< rdi_1[1].d)
        int64_t rax = arg1[0xae]
        int64_t rcx = rsi * 5
        void* rsi_1 = rax + (rcx << 3)
        
        if (*(rax + (rcx << 3) + 0x18) != 0)
            sub_141f6f100(rsi_1)
        
        int64_t* rdi_3 = *(*rdi_1 + (rsi << 3))
        result = *(rdi_3 + 0xec)
        
        if (arg3[1].d s>= result)
            int32_t r14_2 = *(rdi_3 + 0x15c)
            char r15_1 = rdi_3[0x2c].b
            void*** rax_2 = j_sub_140a82f30(0x88)
            
            if (rax_2 != 0)
                rax_2 = sub_1422b4de0(rax_2)
            
            *(rsi_1 + 0x18) = rax_2
            rax_2[4].b = 1
            rax_2[0xd].b = 1
            sub_1422d1f40(*(rsi_1 + 0x18), r14_2)
            *(*(rsi_1 + 0x18) + 0x28) = r15_1
            arg1[0x86]
            int64_t var_28 = 0
            int64_t var_20_1 = 0
            sub_141f59e10(arg3, rdi_3, &var_28)
            sub_1422b5970(*(rsi_1 + 0x18), &var_28)
            sub_1422b9a20(*(rsi_1 + 0x18))
            result = sub_141ee8490(arg1)
            int64_t rcx_8 = var_28
            
            if (rcx_8 != 0)
                return sub_140a74f90(rcx_8)
return result
