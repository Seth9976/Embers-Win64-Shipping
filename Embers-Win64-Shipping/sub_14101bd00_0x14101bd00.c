// 函数: sub_14101bd00
// 地址: 0x14101bd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (**arg1 != 0x87a)
    return 0

int64_t* arg_18 = nullptr

if (Ordinal_d3d12_102(&data_142efda18, &arg_18) s>= 0)
    void* rax_2 = data_143f0f180
    int64_t* arg_10 = nullptr
    int64_t* rcx_1 = *(**(rax_2 + 0x20) + 0x18)
    
    if ((**rcx_1)(rcx_1, &data_142efda28, &arg_10) s>= 0)
        int64_t* rcx_2 = arg_10
        int64_t rbx_1 = 0
        int64_t rbp_1 = 0
        int32_t i_2 = (*(*rcx_2 + 0x48))(rcx_2)
        
        if (i_2 s> 0)
            int64_t rdi_1 = 0
            uint64_t i_1 = zx.q(i_2)
            uint64_t i
            
            do
                int64_t* rcx_3 = arg_10
                int64_t arg_8 = 0
                (*(*rcx_3 + 0x28))(rcx_3, rdi_1, 0, &arg_8)
                int64_t rcx_4 = arg_8
                
                if (rcx_4 u> rbp_1)
                    if (rbx_1 != 0)
                        sub_140a74f90(rbx_1)
                        rcx_4 = arg_8
                    
                    int64_t rax_8 = sub_140a82f30(rcx_4, 0)
                    rbp_1 = arg_8
                    rbx_1 = rax_8
                
                if (rbx_1 != 0)
                    int64_t* rcx_6 = arg_10
                    (*(*rcx_6 + 0x28))(rcx_6, rdi_1, rbx_1, &arg_8)
                
                rdi_1 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
            
            if (rbp_1 != 0)
                sub_140a74f90(rbx_1)
    
    int64_t* rcx_8 = arg_10
    
    if (rcx_8 != 0)
        (*(*rcx_8 + 0x10))(rcx_8)

int64_t* rcx_9 = arg_18

if (rcx_9 != 0)
    (*(*rcx_9 + 0x10))(rcx_9)

return 0xffffffff
