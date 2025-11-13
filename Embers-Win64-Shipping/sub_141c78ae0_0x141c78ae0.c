// 函数: sub_141c78ae0
// 地址: 0x141c78ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
int128_t var_48
__builtin_memcpy(&var_48, 
    "\x9a\x99\x59\x3f\x9a\x99\x59\x3f\x00\x00\x00\x00\x0a\xd7\x63\x3f\x52\xb8\xbe\x3f\xe1\x7a\x54\x3f\x"
"cd\xcc\x4c\x3d\x42\x60\xe5\x3b\xae\x47\xa1\x3f\xcd\xcc\xcc\x3d\xc9\x76\x7e\x3f\x9a\x99\x99\x
        3e", 
    0x30)
int32_t var_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int128_t* rax_2 = *(arg2 + 0x38)
int128_t* rdx_2 = &var_48

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
return sub_141c6ed70(arg1, rdx_2)
