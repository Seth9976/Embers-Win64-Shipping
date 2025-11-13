// 函数: sub_141014780
// 地址: 0x141014780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = &__return_addr
int32_t r14 = 1 << (data_1439c7a34).b
int32_t i_1 = r14 - 1

if (r14 != 1)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(i_1)
    int32_t rsi_1 = temp0_1
    int32_t arg_10 = rsi_1
    
    do
        void* rdi_1 = *(arg1 + (zx.q(rsi_1) << 3) + 0x9d8)
        void** var_58
        sub_141022330(**(rdi_1 + 0x6d8), &var_58, 0)
        var_58 = &data_142efcd90
        int64_t* var_50
        
        if (var_50 != 0)
            int32_t rax_1 = *(var_50 + 0x14)
            *(var_50 + 0x14) -= 1
            
            if (rax_1 == 1)
                sub_141011360(var_50, rax_1.b)
        
        if (data_1439c79e0 != 0)
            void** var_48
            sub_141022330(**(rdi_1 + 0x720), &var_48, 0)
            var_48 = &data_142efcd90
            int64_t* var_40
            
            if (var_40 != 0)
                int32_t rax_2 = *(var_40 + 0x14)
                *(var_40 + 0x14) -= 1
                
                if (rax_2 == 1)
                    sub_141011360(var_40, rax_2.b)
        
        void* rbp_1 = *(rdi_1 + 0x38)
        
        if (*(rbp_1 + 0x28) != 0)
            void* rbx_1 = *(rbp_1 + 0xe8)
            sub_1410644f0(rbx_1, *(rbp_1 + 0xf4), *(rbx_1 + 0x38))
            sub_141037da0(rbx_1)
            *(rbx_1 + 0x38) += 1
            sub_14106a230(*(rbp_1 + 0xe8), *(rbx_1 + 0x40))
        
        void* rbp_2 = *(rdi_1 + 0x40)
        
        if (*(rbp_2 + 0x28) != 0)
            void* rbx_2 = *(rbp_2 + 0xe8)
            sub_1410644f0(rbx_2, *(rbp_2 + 0xf4), *(rbx_2 + 0x38))
            sub_141037da0(rbx_2)
            *(rbx_2 + 0x38) += 1
            sub_14106a230(*(rbp_2 + 0xe8), *(rbx_2 + 0x40))
        
        void* rdi_2 = *(rdi_1 + 0x48)
        
        if (*(rdi_2 + 0x28) != 0)
            void* rbx_3 = *(rdi_2 + 0xe8)
            sub_1410644f0(rbx_3, *(rdi_2 + 0xf4), *(rbx_3 + 0x38))
            sub_141037da0(rbx_3)
            *(rbx_3 + 0x38) += 1
            sub_14106a230(*(rdi_2 + 0xe8), *(rbx_3 + 0x40))
        
        i = not.d(1 << rsi_1.b) & i_1
        i_1 = i
        
        if (i != 0)
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_forward(i)
            rsi_1 = temp0_4
            int32_t arg_20 = rsi_1
        else
            rsi_1 = 0x20
    while (i != 0)

return i
