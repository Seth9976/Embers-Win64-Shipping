// 函数: sub_142834fb8
// 地址: 0x142834fb8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax
int64_t r8
rax, r8 = (*(arg2 + 0x10))(arg2, *arg1)
char const* const rdx_1

if (rax != 0)
    if ((*(arg2 + 0x20))(rax, zx.q(arg1[1].d), 0) != 0xffffffff)
        int64_t rax_3
        rax_3, r8 = malloc(zx.q(*(arg1 + 0xc)))
        arg1[2] = rax_3
        
        if (rax_3 != 0)
            int32_t rax_4
            rax_4, r8 = (*(arg2 + 0x18))(rax_3, zx.q(*(arg1 + 0xc)), rax)
            
            if (rax_4 != 0xffffffff)
                (*(arg2 + 0x28))(rax)
                return 0
            
            rdx_1 = "Failed to read sample data"
        else
            rdx_1 = "Out of memory"
    else
        r8 = perror("error")
        rdx_1 = "Failed to seek position in data file"
else
    rdx_1 = "Can't open soundfont file"

sub_142833a04(1, rdx_1, r8)
return 0xffffffff
