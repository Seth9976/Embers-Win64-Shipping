// 函数: sub_1420d0e20
// 地址: 0x1420d0e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result
int32_t zmm6_1
result, zmm6_1 = sub_1423de540(data_143f5b298, arg1, 1)

if (result != 0)
    void* rcx_1 = *(result + 0x188)
    int64_t* rdi_1
    
    if (rcx_1 == 0)
        rdi_1 = result + 0x308
    else
        rdi_1 = *(rcx_1 + 0xc8)
    
    result = sub_1420af5f0(rdi_1, *(arg3 + 0x10), arg3[1])
    
    if (result == 0)
        void*** rax = j_sub_140a82f30(zx.q((result + 0x20).d))
        void*** rbx = rax
        
        if (rax == 0)
            rbx = nullptr
        else
            void* rdx_2 = *(arg3 + 0x10)
            *(rbx + 0xc) = *(arg3 + 8)
            *(rbx + 0x14) = *arg3
            rbx[1].d = zmm6_1
            *rbx = &data_1432bf520
            sub_140d3a3a0(&rbx[3], rdx_2)
        
        return sub_1420dc280(rdi_1, *(arg3 + 0x10), arg3[1], rbx) __tailcall
    
    *(result + 8) = zmm6_1

return result
