// 函数: sub_1406b6cc0
// 地址: 0x1406b6cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1406baa80(arg1)
void* rdi = arg1
int64_t i_1 = 0x10
int64_t i

do
    int64_t* rbx_1 = *rdi
    
    if (rbx_1 != 0)
        int64_t rcx = *rbx_1
        
        if (rcx != 0)
            av_frame_unref(rcx)
            avsubtitle_free(&rbx_1[1])
            av_frame_free(rbx_1)
        
        *rbx_1 = 0
        *(rbx_1 + 0x5c) = 0
        j_sub_140a74f90(rbx_1)
    
    *rdi = 0
    rdi += 8
    i = i_1
    i_1 -= 1
while (i != 1)
int64_t* rcx_4 = *(arg1 + 0xc0)

if (rcx_4 != 0)
    sub_140a4fc50(rcx_4)

return DeleteCriticalSection(arg1 + 0x98) __tailcall
