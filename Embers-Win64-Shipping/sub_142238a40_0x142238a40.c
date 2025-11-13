// 函数: sub_142238a40
// 地址: 0x142238a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419ea8d0(arg1)
uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = &data_14330b4d0
int64_t arg_8
TEB* gsbase

if (data_143f51c30 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f51c30)
    
    if (data_143f51c30 == 0xffffffff)
        if (data_143de5432 == 0)
            void* rcx_3 = data_143e1a338
            
            if (rcx_3 == 0)
                void* rax_6 = sub_140cde0b0()
                sub_140d19010(rax_6, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
                arg_8 = 0
                void* rax_8 = sub_140d2dfc0(sub_140baa6d0(), rax_6, 0, 0, 0, 0, 0, 0, 0)
                data_143e1a338 = rax_8
                int32_t rax_9 = *(rax_8 + 0xc)
                void* const rax_16
                
                if (rax_9 s>= data_143e1d9b4)
                    rax_16 = nullptr
                else
                    int16_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(rax_9)
                    uint32_t rdx_5 = zx.d(temp0_1)
                    int32_t rax_11 = temp1_1 + rdx_5
                    rax_16 = *(data_143e1d9a0 + (sx.q(rax_11 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_11.w) - rdx_5) * 0x18
                
                *(rax_16 + 8) |= 0x40000000
                rcx_3 = data_143e1a338
            
            sub_140b9aa70(rcx_3, &data_143a2f2a0)
            data_143a2f2a8 = 1
        
        data_143a2f2b0 = 0
        data_143a2f2a0 = &data_1432847b0
        data_143a2f2c0 = 0
        data_143a2f2b8 = u"/Engine/EditorResources/S_KBSJoint"
        sub_140b58260(&data_143a2f2c8, u"Physics", 1)
        atexit(sub_142d09f70)
        _Init_thread_footer(&data_143f51c30)

uint64_t rbx_1 = *sub_140b58260(&arg_8, u"MyConstraintComp", 1)
int64_t* rax_3 = sub_1425604b0()
void* rax_4 = sub_140cd9110(arg1, rbx_1, rax_3, rax_3, 1, 0)
arg1[0x44] = rax_4
arg1[0x26] = rax_4
sub_141dd84c0(arg1, 1)
return arg1
