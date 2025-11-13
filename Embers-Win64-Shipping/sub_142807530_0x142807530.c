// 函数: sub_142807530
// 地址: 0x142807530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_1 = (arg2 + 0x8f) & 0xffffff80
bool cond:0 = *(arg1 + 0x5c) == 0
int32_t arg_10 = rbx_1

if (not(cond:0))
    int32_t rdx_3 = not.d(rbx_1 << 0xf) + rbx_1
    uint32_t rcx = ((zx.q(rdx_3 u>> 0xa) ^ zx.q(rdx_3)) * 9).d
    uint32_t rcx_1 = rcx ^ rcx u>> 6
    uint64_t rax_9 = zx.q(not.d(rcx_1 << 0xb) + rcx_1)
    int32_t i = *(arg1[8] + (((zx.q(rax_9.d) u>> 0x10 ^ rax_9) & zx.q(*(arg1 + 0x4c) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r9_1 = arg1[6]
        
        do
            if (*(r9_1 + zx.q(i) * 0x10) == rbx_1)
                if (i != 0xffffffff)
                    uint64_t rdx_14 = zx.q(i) << 4
                    void* rdx_15 = rdx_14 + r9_1
                    
                    if (rdx_14 != neg.q(r9_1))
                        int64_t* rbx_2 = *(rdx_15 + 8)
                        int64_t rax_18 = *rbx_2
                        *(rdx_15 + 8) = rax_18
                        
                        if (rax_18 == 0)
                            sub_1428079e0(&arg1[4], &arg_10)
                        
                        return &rbx_2[2]
                
                break
            
            i = *(arg1[7] + (zx.q(i) << 2))
        while (i != 0xffffffff)

if (rbx_1 u< arg1[0xc].d)
    rbx_1 = arg1[0xc].d

int64_t* rcx_4 = **arg1
void* rax_16 = (*(*rcx_4 + 8))(rcx_4, zx.q(rbx_1), "RepX variable sized memory pool", 
    "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\physx_3.4\source\physxextensions\src\s"
"erialization\xml\SnXmlMemoryPool.h", 
    0xc1)
int32_t rdx_10 = *(arg1 + 0x1c)
void* arg_8 = rax_16
uint64_t rax_17 = zx.q(arg1[3].d)

if ((rdx_10 & 0x7fffffff) u> rax_17.d)
    void** rdx_17 = arg1[2] + (rax_17 << 3)
    
    if (rdx_17 != 0)
        *rdx_17 = rax_16
    
    arg1[3].d += 1
else
    sub_142808e60(&arg1[1], &arg_8)

*(rax_16 + 8) = rbx_1
return rax_16 + 0x10
