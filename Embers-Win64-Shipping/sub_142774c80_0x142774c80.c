// 函数: sub_142774c80
// 地址: 0x142774c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
arg1[0x44].d = 0x3f800000
*arg1 = &data_14349de08
__builtin_memcpy(arg1 + 0x224, 
    "\x01\x00\x00\x00\x03\x00\x00\x00\x02\x00\x00\x00\x00\x00\x80\x3f\x01\x01", 0x12)
arg1[0x47].b = 0
*(arg1 + 0x23c) = 0
*(arg1 + 0x244) = 0
arg1[0x49].b = 1
*(arg1 + 0x24c) = 0
arg1[0x4a] = 0
arg1[0x4b].d = 0
*(arg1 + 0x25c) = 1
arg1[0x4c].b = 0
*(arg1 + 0x264) = 0
*(arg1 + 0x26c) = 0
arg1[0x4e].b = 1
*(arg1 + 0x274) = 0
arg1[0x4f].d = 0x3f800000
*(arg1 + 0x27c) = 1
arg1[0x51] = 0
arg1[0x52] = 0
void*** rax = j_sub_140a82f30(0x168)
void*** rsi

if (rax == 0)
    rsi = nullptr
else
    rsi = sub_14222a400(rax, arg1)

void*** rax_2 = j_sub_140a82f30(0x18)
void*** rbx = rax_2

if (rax_2 == 0)
    rbx = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rbx = &data_142e21f50
    rbx[2] = rsi

void*** var_28 = rsi
void*** var_20 = rbx

if (&arg1[0x51] == &var_28)
label_142774e27:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rbx)[1](rbx, 1)
else
    arg1[0x51] = rsi
    int64_t* rsi_1 = arg1[0x52]
    var_28 = nullptr
    
    if (rbx == rsi_1)
        goto label_142774e27
    
    void*** var_20_1 = nullptr
    arg1[0x52] = rbx
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp3_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)
        
        rbx = var_20_1
        goto label_142774e27

int64_t rax_7 = sub_140a54cc0(arg1[0x51])
*(arg1 + 0x32) |= 6
uint64_t rcx_6 = zx.q(data_14401b1a0)
arg1[0x53] = rax_7
arg1[6].b = 4
int64_t arg_8
TEB* gsbase

if (data_143f87b34 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx_6 << 3))))
    _Init_thread_header(&data_143f87b34)
    
    if (data_143f87b34 == 0xffffffff)
        if (data_143de5432 == 0)
            void* rcx_12 = data_143e1a338
            
            if (rcx_12 == 0)
                void* rax_17 = sub_140cde0b0()
                sub_140d19010(rax_17, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
                arg_8 = 0
                void* rax_19 = sub_140d2dfc0(sub_140baa6d0(), rax_17, 0, 0, 0, 0, 0, 0, 0)
                data_143e1a338 = rax_19
                int32_t rax_20 = *(rax_19 + 0xc)
                void* const rax_27
                
                if (rax_20 s>= data_143e1d9b4)
                    rax_27 = nullptr
                else
                    int16_t temp4_1
                    int32_t temp5_1
                    temp4_1:temp5_1 = sx.q(rax_20)
                    uint32_t rdx_5 = zx.d(temp4_1)
                    int32_t rax_22 = temp5_1 + rdx_5
                    rax_27 = *(data_143e1d9a0 + (sx.q(rax_22 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_22.w) - rdx_5) * 0x18
                
                *(rax_27 + 8) |= 0x40000000
                rcx_12 = data_143e1a338
            
            sub_140b9aa70(rcx_12, &data_143b6e2c0)
            data_143b6e2c8 = 1
        
        data_143b6e2d0 = 0
        data_143b6e2c0 = &data_1432847b0
        data_143b6e2e0 = 0
        data_143b6e2d8 = u"/Engine/EditorResources/S_Solver.S_Solver"
        sub_140b58260(&data_143b6e2e8, u"Solver", 1)
        _vfprintf_p_l(&data_143b6e2f0, u"Solver", u"SpriteCategory")
        atexit(sub_142d12ef0)
        _Init_thread_footer(&data_143f87b34)

uint64_t rbx_1 = *sub_140b58260(&arg_8, u"SceneComp", 1)
int64_t* rax_11 = sub_1425881f0()
void* rax_12 = sub_140d1dc20(arg2, arg1, rbx_1, rax_11, rax_11, 1, 0)
arg1[0x26] = rax_12
*(rax_12 + 0x14f) = 0
uint64_t rbx_2 = *sub_140b58260(&arg_8, u"GameplayEventDispatcher", 1)
int64_t* rax_14 = sub_142776d90()
arg1[0x54] = sub_140d1dc20(arg2, arg1, rbx_2, rax_14, rax_14, 1, 0)
return arg1
