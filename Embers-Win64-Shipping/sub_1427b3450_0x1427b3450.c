// 函数: sub_1427b3450
// 地址: 0x1427b3450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[5]
int64_t* rbx = r8
void* rax_2 = &r8[sx.q(arg1[6].d) * 4]

if (r8 != rax_2)
    do
        if (*rbx == arg2)
            int32_t rbx_2 = ((rbx - r8) s>> 5).d
            
            if (rbx_2 == 0xffffffff)
                break
            
            int64_t rcx = r8[sx.q(rbx_2) * 4 + 2]
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            int32_t rcx_2 = arg1[6].d
            int32_t rax_4 = rcx_2 - rbx_2
            
            if (rax_4 != 1)
                int64_t r9_1 = arg1[5]
                memmove(r9_1 + (sx.q(rbx_2) << 5), (sx.q(rbx_2 + 1) << 5) + r9_1, (rax_4 - 1) << 5)
                rcx_2 = arg1[6].d
            
            arg1[6].d = rcx_2 - 1
            sub_1405dad20(&arg1[5])
            (*(*arg1 + 0x2a8))(arg1)
            int64_t rax_9
            rax_9.b = 1
            return rax_9
        
        rbx = &rbx[4]
    while (rbx != rax_2)

rax_2.b = 0
return rax_2
