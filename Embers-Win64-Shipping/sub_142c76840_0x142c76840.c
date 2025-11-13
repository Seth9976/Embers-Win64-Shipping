// 函数: sub_142c76840
// 地址: 0x142c76840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
char r8 = 1
void* rdi = *(rbx + 0x250)

if (*(rbx + 0x804) != 0xb)
    r8 = arg3

int32_t rax_1
int512_t zmm2
rax_1, zmm2 = sub_142c6be40(arg1, arg2, r8, arg4)

if (rdi != 0)
    int32_t rdx = *(rbx + 0x804)
    int32_t rcx = *(rdi + 0x88)
    uint64_t r8_1 = zx.q(*(rdi + 0x8c))
    
    if (rdx == 0xb)
    label_142c768c0:
        
        if (arg1[0xd5].d == 0xffffffff)
            sub_142c64850(rbx, "Got an RTP Receive with a CSeq of %ld\n", r8_1, zmm2)
    else
        if (rcx != r8_1.d)
            sub_142c64760(rbx, "The CSeq of this request %ld did not match the response %ld", 
                zx.q(rcx), zmm2)
            return 0x55
        
        if (rdx == 0xb)
            goto label_142c768c0

return zx.q(rax_1)
