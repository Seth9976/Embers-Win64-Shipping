// 函数: sub_14289e160
// 地址: 0x14289e160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
*arg1 = arg2
arg1[1] = arg3
arg1[2] = arg4
arg1[3] = 0
arg1[5] = 0
__builtin_memset(&arg1[0x17], 0, 0x3c)
__builtin_memset(&arg1[0x11], 0, 0x2c)
uint64_t (* rax_1)(void* arg1, int64_t* arg2, int64_t* arg3)

if (arg2 != 0)
    rax_1 = *(arg2 + 0x38)

if (arg2 == 0 || rax_1 == 0)
    rax_1 = sub_1428a0120

arg1[9] = rax_1
uint64_t (* rax_2)(int64_t* arg1, int64_t* arg2, void* arg3)

if (arg2 != 0)
    rax_2 = *(arg2 + 0x30)

if (arg2 == 0 || rax_2 == 0)
    rax_2 = sub_14289d520

arg1[8] = rax_2
uint64_t (* rax_3)(int32_t arg1)

if (arg2 != 0)
    rax_3 = *(arg2 + 0x28)

if (arg2 == 0 || rax_3 == 0)
    rax_3 = sub_1428a1f20

arg1[7] = rax_3
int64_t (* rax_4)(void* arg1)

if (arg2 != 0)
    rax_4 = *(arg2 + 0x20)

if (arg2 == 0 || rax_4 == 0)
    rax_4 = sub_1428a1d30

arg1[6] = rax_4
int64_t (* rax_5)(void* arg1)

if (arg2 != 0)
    rax_5 = *(arg2 + 0x40)

if (arg2 == 0 || rax_5 == 0)
    rax_5 = sub_1428a0840

arg1[0xa] = rax_5
int64_t rax_6

if (arg2 != 0)
    rax_6 = *(arg2 + 0x48)

if (arg2 == 0 || rax_6 == 0)
    rax_6 = 0

arg1[0xb] = rax_6
int64_t (* rax_7)(int64_t* arg1, void* arg2)

if (arg2 != 0)
    rax_7 = *(arg2 + 0x50)

if (arg2 == 0 || rax_7 == 0)
    rax_7 = sub_14289faf0

arg1[0xc] = rax_7
int64_t (* rax_8)(void* arg1, void* arg2, void* arg3)

if (arg2 != 0)
    rax_8 = *(arg2 + 0x58)

if (arg2 == 0 || rax_8 == 0)
    rax_8 = sub_14289f580

arg1[0xd] = rax_8
int64_t (* rax_9)(void* arg1)

if (arg2 != 0)
    rax_9 = *(arg2 + 0x60)

if (arg2 == 0 || rax_9 == 0)
    rax_9 = sub_1428a0640

arg1[0xe] = rax_9
int32_t* (* rax_10)(int64_t* arg1, int64_t arg2)

if (arg2 != 0)
    rax_10 = *(arg2 + 0x68)

if (arg2 == 0 || rax_10 == 0)
    rax_10 = sub_14289d1b0

arg1[0xf] = rax_10
int32_t* (* rax_11)(int64_t* arg1, int64_t arg2)

if (arg2 != 0)
    rax_11 = *(arg2 + 0x70)

if (arg2 == 0 || rax_11 == 0)
    rax_11 = sub_14289d340

arg1[0x10] = rax_11
void* rax_12 = sub_1428ab620()
arg1[4] = rax_12
int32_t rax_13

if (rax_12 == 0)
    rax_13 = 0x8f3
else if (arg2 == 0)
    *(rax_12 + 0x10) |= 0x11
label_14289e34a:
    void* rax_15 = sub_1428ab530("default")
    
    if (sub_1428ab2a0(arg1[4], rax_15) != 0)
        void* rax_17 = arg1[4]
        
        if (*(rax_17 + 0x1c) == 0)
            void* rax_19 = sub_1428ae5c0(sub_1428ae610(*(rax_17 + 0x18)))
            
            if (rax_19 != 0)
                *(arg1[4] + 0x1c) = opus_repacketizer_get_nb_frames(rax_19)
        
        if (sub_1428a62f0(5, arg1, &arg1[0x1c]) != 0)
            return 1
        
        rax_13 = 0x917
    else
        rax_13 = 0x904
else
    if (sub_1428ab2a0(rax_12, *(arg2 + 0x18)) != 0)
        goto label_14289e34a
    
    rax_13 = 0x904

sub_1428a5670(0xb, 0x8f, 0x41, "crypto\x509\x509_vfy.c", rax_13)
sub_14289e040(arg1)
return 0
