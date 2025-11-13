// 函数: sub_140b93ce0
// 地址: 0x140b93ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
int64_t rax

if (arg2 == 0)
    rax = 0
else
    rax = *(arg2 + 0x50)

arg1[1] = rax
arg1[2].d = 0xffffffff
rax.b = arg3 == 1
*(arg1 + 0x14) = rax.b
rax.b = arg4 == 1
*(arg1 + 0x15) = rax.b
int64_t rax_3

if (arg5 != 1 || arg2 == 0)
    rax_3 = 0
else
    void* rax_1 = sub_140bdf2e0()
    void* rdx = *(arg2 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        rax_3 = 0
    else
        rax_3.b = 1

int64_t* rdx_1 = *arg1
void* i = arg1[1]
*(arg1 + 0x16) = rax_3.b

if (rdx_1 != 0)
    while (true)
        for (; i != 0; i = *(i + 0x20))
            int64_t rcx_1 = *(*(i + 8) + 0x10)
            
            if ((zx.q(rcx_1.d) & 0x8001) == 0x8001)
                if (*(arg1 + 0x15) != 0)
                    goto label_140b93e0c
                
                if (((rcx_1 u>> 0xf).b & 1) == 0)
                    goto label_140b93e0c
                
                if (((zx.q(*(i + 0x40)) u>> 0x1d).b & 1) == 0)
                    goto label_140b93e0c
        
        if (*(arg1 + 0x16) != 0)
            int64_t rcx_3 = sx.q(arg1[2].d)
            int32_t rax_9 = (rcx_3 + 1).d
            arg1[2].d = rax_9
            
            if (rax_9 s< rdx_1[0x3c].d)
                i = *(((rcx_3 + 1) << 4) + rdx_1[0x3b])
                
                if (i == 0)
                    continue
                else
                    i = *(i + 0x50)
                    continue
        
        if (*(arg1 + 0x14) == 0)
            break
        
        int64_t* rax_14 = (*(*rdx_1 + 0x270))(rdx_1)
        rdx_1 = rax_14
        
        if (rax_14 == 0)
            break
        
        i = rax_14[0xa]
        arg1[2].d = 0xffffffff

label_140b93e0c:
*arg1 = rdx_1
arg1[1] = i
return arg1
