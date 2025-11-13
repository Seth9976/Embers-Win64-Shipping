// 函数: sub_1428be5f0
// 地址: 0x1428be5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

__chkstk(0x20)
void* rax_1 = *arg1
int64_t rdx_1 = *(rax_1 + 0x18)

if (rdx_1 != 0)
    rdx_1()
else
    rdx_1 = *(rax_1 + 0x10)
    
    if (rdx_1 != 0)
        rdx_1()

if (arg1[0x13].d == 5)
    sub_142918150(arg1[0x14])

void* rcx_1 = arg1[0x12]
arg1[0x14] = 0
sub_1428cc600(rcx_1)
int64_t* rdi_1 = arg1[1]

if (rdi_1 != 0)
    void* rax_2 = *rdi_1
    int64_t rdx_2 = *(rax_2 + 0x60)
    
    if (rdx_2 != 0)
        rdx_2(rdi_1)
    else
        rdx_2 = *(rax_2 + 0x58)
        
        if (rdx_2 != 0)
            rdx_2(rdi_1)
    
    sub_1428a6890(rdi_1, 0x30, "crypto\ec\ec_lib.c", 0x261)

sub_14288fbf0(arg1[2])
sub_14288fbf0(arg1[3])
sub_1428a6890(arg1[6], arg1[7], "crypto\ec\ec_lib.c", 0x7e)
sub_1428a6890(arg1, 0xa8, "crypto\ec\ec_lib.c", 0x7f)
