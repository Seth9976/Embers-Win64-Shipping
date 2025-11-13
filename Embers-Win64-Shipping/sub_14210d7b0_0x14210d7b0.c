// 函数: sub_14210d7b0
// 地址: 0x14210d7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm2
int128_t zmm3
zmm2, zmm3 = sub_14211e840(arg1)
int64_t* rbx = *(arg1 + 0x238)

if (rbx != 0)
    char rax_1 = sub_140a80f40()
    
    if (rax_1 != 0)
        *(rbx + 0x18c) |= 1
        (*(*rbx + 0x30))(rbx)
    else if (data_143f138f4 != rax_1)
    label_14210d827:
        void var_28
        void** rax_4 = sub_14210e250(&var_28, nullptr, 0xff)
        *(*rax_4 + 0x10) = rbx
        void* rcx_3 = *rax_4
        int32_t r8_1 = rax_4[2].d
        int64_t* rdx_1 = rax_4[1]
        int64_t* rbx_1 = *(rcx_3 + 0x20)
        int64_t* arg_10 = rbx_1
        int32_t* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = arg_10
        
        sub_1405a5630(rcx_3, rdx_1, r8_1, 1)
        
        if (rbx_1 != 0)
            int32_t rax_5 = *rdi_1
            *rdi_1 -= 1
            
            if (rax_5 == 1)
                sub_140a2f6e0(arg_10)
    else if (data_143de5480 == rax_1)
        *(rbx + 0x18c) |= 1
        (*(*rbx + 0x30))(rbx)
    else
        uint32_t rax_2
        rax_2.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_2.b == 0)
            goto label_14210d827
        
        *(rbx + 0x18c) |= 1
        (*(*rbx + 0x30))(rbx)

return sub_141997ac0(arg1 + 0x2b0, 0, zmm2, zmm3) __tailcall
