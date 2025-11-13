// 函数: sub_14211e730
// 地址: 0x14211e730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t entry_zmm2
int128_t entry_zmm3
int128_t zmm3 = sub_141997ac0(arg1 + 0x40, 0, entry_zmm2, entry_zmm3)
int128_t zmm2 = sub_140cd7d40(arg1)

if (((*(arg1 + 8) u>> 4).b & 1) == 0)
    int64_t* rbx_1 = *(arg1 + 0x140)
    char rax_2 = sub_140a80f40()
    
    if (rax_2 != 0)
        *(rbx_1 + 0x18c) |= 1
        (*(*rbx_1 + 0x30))(rbx_1)
    else if (data_143f138f4 != rax_2)
    label_14211e7c3:
        void var_28
        void** rax_5 = sub_14210e250(&var_28, nullptr, 0xff)
        *(*rax_5 + 0x10) = rbx_1
        void* rcx_6 = *rax_5
        int32_t r8_1 = rax_5[2].d
        int64_t* rdx_1 = rax_5[1]
        int64_t* rbx_2 = *(rcx_6 + 0x20)
        int64_t* arg_10 = rbx_2
        int32_t* rdi_1 = &rbx_2[9]
        
        if (rbx_2 != 0)
            *rdi_1 += 1
            rbx_2 = arg_10
        
        sub_1405a5630(rcx_6, rdx_1, r8_1, 1)
        
        if (rbx_2 != 0)
            int32_t rax_6 = *rdi_1
            *rdi_1 -= 1
            
            if (rax_6 == 1)
                sub_140a2f6e0(arg_10)
    else if (data_143de5480 == rax_2)
        *(rbx_1 + 0x18c) |= 1
        (*(*rbx_1 + 0x30))(rbx_1)
    else
        uint32_t rax_3
        rax_3.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_3.b == 0)
            goto label_14211e7c3
        
        *(rbx_1 + 0x18c) |= 1
        (*(*rbx_1 + 0x30))(rbx_1)

return sub_141997ac0(arg1 + 0x3f8, 0, zmm2, zmm3) __tailcall
