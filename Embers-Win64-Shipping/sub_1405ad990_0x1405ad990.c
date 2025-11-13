// 函数: sub_1405ad990
// 地址: 0x1405ad990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15e10(arg1)
arg1[5].b = 1
*(arg1 + 0x2c) = 0
arg1[7] = 0
arg1[8] = 0
arg1[9].d = 0xffffffff
*(arg1 + 0x4c) = 0
*(arg1 + 0x54) = 0x780
arg1[0xb].d = 0x438
*(arg1 + 0x5c) = 6
arg1[0xc].b = 1
arg1[0xd] = 0
*arg1 = &data_142d48228
arg1[0xe] = 0
arg1[0xf] = 0
sub_1405ab4c0(&arg1[0x10])
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t rcx_1 = zx.q(data_14401b1a0)
arg1[0x3b] = 0
int32_t* rsi_1 = *(ThreadLocalStoragePointer + (rcx_1 << 3)) + 0x14

if (data_143cd61d0 s> *rsi_1)
    _Init_thread_header(&data_143cd61d0)
    
    if (data_143cd61d0 == 0xffffffff)
        sub_1405aa900(&data_143cd61b8, u"/Composure/Materials/ChromaKeying/M_SinglePassDespill", 0)
        atexit(sub_142cb0820)
        _Init_thread_footer(&data_143cd61d0)

void* const rbx = data_143cd61c8
void* rax_1
int64_t rax_2
void* rdx_1

if (rbx != 0)
    rax_1 = sub_142543940()
    rdx_1 = *(rbx + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rbx == 0 || rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rbx = nullptr

arg1[0x24] = rbx
void arg_8
sub_140b58260(&arg_8, u"LinearColorPlate", 1)
sub_1405a7750(&arg1[0x2f], &data_143cd6008, &arg_8)
sub_140b58260(&arg_8, u"KeyColor", 1)
sub_1405a7750(&arg1[0x2f], &data_143cd6010, &arg_8)
sub_140b58260(&arg_8, u"PrevKeyerResult", 1)
sub_1405a7750(&arg1[0x2f], &data_143cd6018, &arg_8)

if (data_143cd61f0 s> *rsi_1)
    _Init_thread_header(&data_143cd61f0)
    
    if (data_143cd61f0 == 0xffffffff)
        sub_1405aaa00(&data_143cd61d8, 
            /Engine/Functions/Engine_MaterialFunctions02/PivotPainter2/Black_1x1_EXR_Texture."
        "Black_1x1_EXR_Texture", 0)
        atexit(&data_142cb0790)
        _Init_thread_footer(&data_143cd61f0)

void* rbx_1 = data_143cd61e8
void* rax_5
int64_t rax_6
void* rdx_2

if (rbx_1 != 0)
    rax_5 = sub_1425b3bb0()
    rdx_2 = *(rbx_1 + 0x10)
    rax_6 = sx.q(*(rax_5 + 0x38))

if (rbx_1 == 0 || rax_6.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
    arg1[0x3b] = 0
else
    arg1[0x3b] = rbx_1

return arg1
