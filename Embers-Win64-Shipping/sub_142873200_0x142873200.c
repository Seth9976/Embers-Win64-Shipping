// 函数: sub_142873200
// 地址: 0x142873200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rdi = 0x21

if (*(arg1 + 0x38) == 0)
    rdi = 0x11

void* rax = *(arg1 + 0xa8)

if (*(rax + 0x270) != 0)
label_142873277:
    int64_t r8_1 = *(*(arg1 + 8) + 0xc0)
    
    if ((*(r8_1 + 0x20))(arg1, zx.q(rdi), r8_1) != 0)
        return 1
else
    void* rcx = *(arg1 + 0x508)
    
    if (rcx == 0 || *(rcx + 8) == 0)
        sub_1428a5670(0x14, 0x124, 0x85, "ssl\s3_msg.c", 0x18)
    else
        *(rcx + 0x128) = *(rax + 0x238)
        int64_t rdx_1 = *(*(arg1 + 8) + 0xc0)
        
        if ((*(rdx_1 + 0x10))(arg1, rdx_1) != 0)
            goto label_142873277

return 0
