// 函数: sub_142a91fe0
// 地址: 0x142a91fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142a91400()
sub_142a860a0(&data_144015c00)
int64_t* rdi = data_144015bf0
sub_142a860d0(&data_144015c00)

if (rdi != 0)
    return rdi

int32_t arg_8 = rdi.d
char* rax = sub_142a4b9d0()
char* rbx = rax
int512_t entry_zmm1

if (rax == 0)
    rbx = "US-ASCII"
else
    int64_t* rax_1
    rax_1, entry_zmm1 = sub_142a84e10(rax, &arg_8)
    rdi = rax_1
    int32_t rax_2 = arg_8
    
    if (rax_2 s<= 0 && rdi != 0)
        rbx = sub_142a84dc0(rdi, &arg_8)
        rax_2 = arg_8
    
    if (rbx == 0 || *rbx == 0 || rax_2 s> 0 || rdi == 0)
        rbx = "US-ASCII"
    else
        int64_t rax_4 = -1
        
        do
            rax_4 += 1
        while (rbx[rax_4] != 0)
        
        if (rax_4 u>= 0x3d)
            rbx = "US-ASCII"

sub_142a915f0(rbx, &arg_8)
sub_142a84ad0(rdi, entry_zmm1)
return rbx
