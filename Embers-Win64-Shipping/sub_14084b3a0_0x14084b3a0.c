// 函数: sub_14084b3a0
// 地址: 0x14084b3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx
int512_t zmm1
rdx, zmm1 = sub_140b33630("Niagara")

if (*(arg1 + 0x6e8) != 4)
    int64_t* rbx_1 = *(arg1 + 0x20)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    zmm1.o = arg2
    sub_14085fa90(*(arg1 + 0x18), rdx, arg3)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rdi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

return sub_140b37f60("Niagara") __tailcall
