// 函数: ?Emit@MLI@@QEAAHAEAVBuffer@pdb_internal@@@Z
// 地址: 0x142b08370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[2](*arg2, 0, 0xa0)
int64_t i = 0
int32_t r15 = 0x900

do
    int32_t rdi_1 = 0
    char rbp_1 = *(i * 0xc + 0x143668664)
    
    for (int64_t j = 0; j s< 0x80; j += 1)
        if ((*(j + 0x143668720) & rbp_1) != 0)
            arg2[1](*arg2, zx.q(r15 + rdi_1))
        else if (i == 6 && j == 0x31)
            arg2[1](*arg2, zx.q(r15 + rdi_1))
        
        rdi_1 += 1
    
    r15 -= 0xffffff80
    i += 1
while (i s<= 8)

arg2[1](*arg2, 0x964)
arg2[1](*arg2, 0x965)
arg2[1](*arg2, 0x200c)
*arg2
jump(arg2[1])
