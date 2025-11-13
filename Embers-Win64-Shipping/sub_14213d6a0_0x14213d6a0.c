// 函数: sub_14213d6a0
// 地址: 0x14213d6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x68)

if (rax != 0)
    int128_t var_50 = *(arg1 + 0x28)
    
    if (sub_140a80f40() == 0)
        uint32_t rax_2
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_2.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_2.b == 0))
            void var_28
            int64_t* rax_3 = sub_142140620(&var_28, nullptr, 0xff)
            void* rcx_1 = *rax_3
            *(rcx_1 + 0x10) = rax.o
            *(rcx_1 + 0x20) = var_50:8.q
            void* rcx_2 = *rax_3
            int32_t r8_3 = rax_3[2].d
            int64_t* rdx_3 = rax_3[1]
            int64_t* rbx_1 = *(rcx_2 + 0x30)
            int64_t* arg_10 = rbx_1
            int32_t* rdi_1 = &rbx_1[9]
            
            if (rbx_1 != 0)
                *rdi_1 += 1
                rbx_1 = arg_10
            
            sub_140778000(rcx_2, rdx_3, r8_3, 1)
            
            if (rbx_1 != 0)
                int32_t rax_4 = *rdi_1
                *rdi_1 -= 1
                
                if (rax_4 == 1)
                    sub_140a2f6e0(arg_10)
        else
            int64_t zmm1 = var_50:8.q
            int128_t var_40 = rax.o
            int64_t var_30_1 = zmm1
            sub_1421525a0(&data_143a2eb00, &var_40:8, var_40.q)
    else
        sub_1421525a0(&data_143a2eb00, &var_50, rax)

int128_t entry_zmm2
int128_t entry_zmm3
sub_141997ac0(arg1 + 0x58, 0, entry_zmm2, entry_zmm3)
return sub_140cd7d40(arg1) __tailcall
