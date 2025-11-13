// 函数: sub_140d0a0c0
// 地址: 0x140d0a0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdx = *arg1
void* i = arg1[1]

if (rdx != 0)
    while (true)
        for (; i != 0; i = *(i + 0x28))
            int64_t rcx = *(*(i + 0x10) + 0xd0)
            
            if (((rcx u>> 0x13).b & 1) != 0)
                if (*(arg1 + 0x15) != 0)
                    goto label_140d0a189
                
                if (((rcx u>> 0xf).b & 1) == 0)
                    goto label_140d0a189
                
                if (((zx.q(*(i + 0x40)) u>> 0x1d).b & 1) == 0)
                    goto label_140d0a189
        
        uint64_t rax
        
        if (*(arg1 + 0x16) != 0)
            int64_t rcx_2 = sx.q(arg1[2].d)
            rax = zx.q((rcx_2 + 1).d)
            arg1[2].d = rax.d
            
            if (rax.d s< *(rdx + 0x1e0))
                i = *(*(rdx + 0x1d8) + (rcx_2 + 1) * 0x10)
                
                if (i == 0)
                    continue
                else
                    i = *(i + 0x48)
                    continue
        
        if (*(arg1 + 0x14) == 0)
            break
        
        rax = (*(*rdx + 0x270))(rdx)
        rdx = rax
        
        if (rax == 0)
            break
        
        i = *(rax + 0x48)
        arg1[2].d = 0xffffffff

label_140d0a189:
*arg1 = rdx
arg1[1] = i
