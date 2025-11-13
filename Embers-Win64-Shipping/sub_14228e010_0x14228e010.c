// 函数: sub_14228e010
// 地址: 0x14228e010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
sub_1405a7050(arg1 + 0x20, &arg_10)

if (arg2 != 0)
    void* rax_1 = sub_1425881f0()
    void* rdx_1 = arg2[2]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30
            && arg2[0x18] == 0)
        sub_141f49090(arg2, arg3, 0, 0, 0)

sub_141ef14c0(arg2, *(arg1 + 0x30), 0)

if (*(arg1 + 0x40) == 0)
label_14228e0ce:
    
    if (arg2 != 0)
        void* rax_8 = sub_1425b0750()
        void* rdx_5 = arg2[2]
        int64_t rax_9 = sx.q(*(rax_8 + 0x38))
        
        if (rax_9.d s<= *(rdx_5 + 0x38) && *(*(rdx_5 + 0x30) + (rax_9 << 3)) == rax_8 + 0x30)
            *(arg2 + 0x44c) |= 1
else if (arg2 != 0)
    void* rax_4 = sub_142546fa0()
    void* rdx_4 = arg2[2]
    int64_t rax_5 = sx.q(*(rax_4 + 0x38))
    
    if (rax_5.d s<= *(rdx_4 + 0x38) && *(*(rdx_4 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
        rdx_4.b = 1
        (*(*arg2 + 0x888))(arg2, rdx_4)
    
    goto label_14228e0ce

int512_t zmm1
zmm1.o = zx.o(0)
jump(*(**(*(arg1 + 0x30) + 0x1b0) + 0x218))
