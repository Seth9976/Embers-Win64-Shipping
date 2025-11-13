// 函数: sub_140be1e30
// 地址: 0x140be1e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdx = *arg1
void* i = arg1[1]

if (rdx != 0)
    while (true)
        uint64_t rax
        
        for (; i != 0; i = *(i + 0x20))
            rax = *(i + 8)
            
            if ((*(rax + 0x10) & 1) != 0)
                if (*(arg1 + 0x15) != 0)
                    goto label_140be1ee4
                
                if (((zx.q(*(rax + 0x10)) u>> 0xf).b & 1) == 0)
                    goto label_140be1ee4
                
                if (((zx.q(*(i + 0x40)) u>> 0x1d).b & 1) == 0)
                    goto label_140be1ee4
        
        if (*(arg1 + 0x16) != 0)
            int64_t rcx = sx.q(arg1[2].d)
            rax = zx.q((rcx + 1).d)
            arg1[2].d = rax.d
            
            if (rax.d s< *(rdx + 0x1e0))
                i = *(*(rdx + 0x1d8) + (rcx + 1) * 0x10)
                
                if (i == 0)
                    continue
                else
                    i = *(i + 0x50)
                    continue
        
        if (*(arg1 + 0x14) == 0)
            break
        
        rax = (*(*rdx + 0x270))(rdx)
        rdx = rax
        
        if (rax == 0)
            break
        
        i = *(rax + 0x50)
        arg1[2].d = 0xffffffff

label_140be1ee4:
*arg1 = rdx
arg1[1] = i
