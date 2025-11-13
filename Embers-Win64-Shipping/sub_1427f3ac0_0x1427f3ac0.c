// 函数: sub_1427f3ac0
// 地址: 0x1427f3ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi_1 = arg1[0x75] & 0x7fffffff
int32_t rsi_2
int32_t* rdi

if (rsi_1 != 0)
    rsi_2 = rsi_1 * 2
    
    if (rsi_1 != neg.d(rsi_1))
        goto label_1427f3af3
    
    rdi = nullptr
else
    rsi_2 = 1
label_1427f3af3:
    int32_t rax_1 = rsi_2 * 0x1c
    
    if (arg1[0x70].b != 0 || rax_1 u> 0x1c0)
        rdi = sub_1427f21d0(arg1, zx.q(rax_1), 
            "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\pxshared\src\foundation\include\P"
        "sArray.h", 
            0x25d)
    else
        arg1[0x70].b = 1
        rdi = arg1

sub_1427f36e0(rdi, zx.q(arg1[0x74]) * 0x1c + rdi, *(arg1 + 0x1c8))
void* rcx_1 = zx.q(arg1[0x74]) * 0x1c
void* rcx_2 = rcx_1 + rdi

if (rcx_1 != neg.q(rdi))
    *rcx_2 = *arg2
    *(rcx_2 + 4) = arg2[1]
    *(rcx_2 + 8) = arg2[2]
    *(rcx_2 + 0xc) = arg2[3]
    *(rcx_2 + 0x10) = arg2[4]
    *(rcx_2 + 0x14) = arg2[5]
    *(rcx_2 + 0x18) = arg2[6]

if (arg1[0x75] s>= 0)
    int64_t rbp_1 = *(arg1 + 0x1c8)
    
    if (rbp_1 == arg1)
        arg1[0x70].b = 0
    else if (rbp_1 != 0)
        class physx::PxAllocatorCallback* rax_12 = physx::shdfnd::getAllocator()
        int64_t r8_1 = *rax_12
        (*(r8_1 + 0x10))(rax_12, rbp_1, r8_1)

uint64_t rcx_4 = zx.q(arg1[0x74])
arg1[0x75] = rsi_2
*(arg1 + 0x1c8) = rdi
arg1[0x74] = rcx_4.d + 1
return rcx_4 * 0x1c + rdi
