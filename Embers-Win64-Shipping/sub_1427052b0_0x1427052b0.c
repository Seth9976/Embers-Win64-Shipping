// 函数: sub_1427052b0
// 地址: 0x1427052b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1

if (arg1[0x9e].b != 0 || arg1[0x6e].b == 0)
    return 

void* rdi_1 = *(arg1 + 0x100)

if (rdi_1 != 0)
    if (*(rdi_1 + 0x70) == data_143f71588.d)
        arg1.b = 1
    else
        arg1 = *(rdi_1 + 0x78)
        
        if (arg1 == 0)
            arg1.b = 0
        else
            char rax_2
            rax_2, arg1 = sub_14268a5a0(arg1, &data_143f71588)
            
            if (rax_2 != 0)
                arg1.b = 1
            else
                arg1.b = 0
    
    void* const rax = nullptr
    
    if (arg1.b != 0)
        rax = rdi_1
    
    if (rax != 0)
        int64_t r8 = sx.q(rbx[0x52].d)
        int64_t rdx = sx.q(*(rax + 0x108))
        
        if (r8.d s< rdx.d)
            int64_t rcx = r8
            void* rdx_1 = *(rax + 0x100) + (r8 << 3)
            
            do
                if (*rdx_1 == arg2)
                    rbx[0x52].d = r8.d
                    break
                
                r8 = zx.q(r8.d + 1)
                rcx += 1
                rdx_1 += 8
            while (rcx s< rdx)

if (arg4 s> 2 || (*(rbx + 0x275) & 0x20) != 0)
    return 

int32_t rax_4 = (*(*rbx + 0x508))(rbx, 0)
int64_t r8_1 = *rbx
(*(r8_1 + 0x4c8))(rbx, zx.q(rax_4), r8_1)
