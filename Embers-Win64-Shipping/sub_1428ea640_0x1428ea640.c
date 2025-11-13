// 函数: sub_1428ea640
// 地址: 0x1428ea640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* arg_10 = nullptr

if (arg2 == 0)
    sub_1428a5670(0x22, 0x6c, 0x6d, "crypto\x509v3\v3_utl.c", 0xb0)
    return 0

int64_t* rax_1 = sub_142890500()
arg_10 = rax_1

if (rax_1 == 0)
    sub_1428a5670((rax_1 + 0x22).d, (rax_1 + 0x6c).d, (rax_1 + 0x41).d, "crypto\x509v3\v3_utl.c", 
        0xb5)
    return 0

char rax_3 = *arg2
char rcx_1
int32_t rbx

if (rax_3 != 0x2d)
    rbx = 0
    rcx_1 = rax_3
else
    rcx_1 = arg2[1]
    rbx = 1

char* rdi = &arg2[1]

if (rax_3 != 0x2d)
    rdi = arg2

int32_t rax_5

if (rcx_1 != 0x30 || ((rdi[1] - 0x58) & 0xdf) != 0)
    rax_5 = sub_1428f5fa0(&arg_10, rdi)
else
    rdi = &rdi[2]
    rax_5 = sub_1428f6170(&arg_10, rdi)

int32_t var_18_1
int32_t r8_2

if (rax_5 == 0 || *(sx.q(rax_5) + rdi) != 0)
    sub_1428901a0(arg_10)
    r8_2 = 0x64
    var_18_1 = 0xcb
else
    if (rbx != 0 && sub_142890300(arg_10) != 0)
        rbx = 0
    
    void* result = sub_1428e49c0(arg_10, nullptr)
    sub_1428901a0(arg_10)
    
    if (result != 0)
        if (rbx != 0)
            *(result + 4) |= 0x100
        
        return result
    
    var_18_1 = 0xd6
    r8_2 = (result + 0x65).d

sub_1428a5670(0x22, 0x6c, r8_2, "crypto\x509v3\v3_utl.c", var_18_1)
return nullptr
