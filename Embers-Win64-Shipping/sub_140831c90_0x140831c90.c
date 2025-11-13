// 函数: sub_140831c90
// 地址: 0x140831c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143ce3e50 s> *rbx_1)
    _Init_thread_header(&data_143ce3e50)
    
    if (data_143ce3e50 == 0xffffffff)
        data_143ce3e48 = j_sub_140d2ee50(sub_140cddea0(), nullptr, u"/Script/CoreUObject", 0)
        _Init_thread_footer(&data_143ce3e50)

if (data_143ce3e60 s> *rbx_1)
    _Init_thread_header(&data_143ce3e60)
    
    if (data_143ce3e60 == 0xffffffff)
        data_143ce3e58 = j_sub_140d2ee50(sub_140cddea0(), nullptr, u"/Script/Niagara", 0)
        _Init_thread_footer(&data_143ce3e60)

int64_t rax_4 = j_sub_140d2ee50(sub_140bdfe30(), data_143ce3e58, u"NiagaraParameterMap", 0)
void* rbx_3 = data_143ce3e58
data_143ce3900 = rax_4
int64_t rax_6 = j_sub_140d2ee50(sub_140bdfe30(), rbx_3, u"NiagaraID", 0)
void* rbx_4 = data_143ce3e58
data_143ce3908 = rax_6
int64_t rax_8 = j_sub_140d2ee50(sub_140bdfe30(), rbx_4, u"NiagaraNumeric", 0)
void* rbx_5 = data_143ce3e58
data_143ce38b8 = rax_8
int64_t rax_10 = j_sub_140d2ee50(sub_140bdfe30(), rbx_5, u"NiagaraFloat", 0)
void* rbx_6 = data_143ce3e58
data_143ce3870 = rax_10
int64_t rax_12 = j_sub_140d2ee50(sub_140bdfe30(), rbx_6, u"NiagaraBool", 0)
void* rbx_7 = data_143ce3e58
data_143ce3878 = rax_12
int64_t rax_14 = j_sub_140d2ee50(sub_140bdfe30(), rbx_7, u"NiagaraInt32", 0)
void* rbx_8 = data_143ce3e58
data_143ce3880 = rax_14
int64_t rax_16 = j_sub_140d2ee50(sub_140bdfe30(), rbx_8, u"NiagaraMatrix", 0)
void* rbx_9 = data_143ce3e48
data_143ce38b0 = rax_16
int64_t rax_18 = j_sub_140d2ee50(sub_140bdfe30(), rbx_9, u"Vector2D", 0)
void* rbx_10 = data_143ce3e48
data_143ce3888 = rax_18
int64_t rax_20 = j_sub_140d2ee50(sub_140bdfe30(), rbx_10, u"Vector", 0)
void* rbx_11 = data_143ce3e48
data_143ce3890 = rax_20
int64_t rax_22 = j_sub_140d2ee50(sub_140bdfe30(), rbx_11, u"Vector4", 0)
void* rbx_12 = data_143ce3e48
data_143ce3898 = rax_22
int64_t rax_24 = j_sub_140d2ee50(sub_140bdfe30(), rbx_12, u"LinearColor", 0)
void* rbx_13 = data_143ce3e48
data_143ce38a8 = rax_24
data_143ce38a0 = j_sub_140d2ee50(sub_140bdfe30(), rbx_13, u"Quat", 0)
data_143ce38c0 = sub_140d41340()
int64_t rax_28 = sub_142543940()
int64_t rcx_14 = data_143ce3908
int32_t var_20 = 0xffff0002
int16_t var_1c = 0xffff
int32_t var_20_1 = 0xffff0002
int16_t var_1c_1 = 0xffff
data_14396f128.o = data_143ce3900.o
data_143ce38c8 = rax_28
int64_t rax_29 = data_143ce38b8
int64_t rax_30 = data_143ce3870
int32_t var_20_2 = 0xffff0002
int16_t var_1c_2 = 0xffff
data_14396f138.o = rcx_14.o
int64_t rax_31 = data_143ce3878
int32_t var_20_3 = 0xffff0002
int16_t var_1c_3 = 0xffff
data_14396f118 = rax_29.o
int64_t rax_32 = data_143ce3880
int32_t var_20_4 = 0xffff0002
int16_t var_1c_4 = 0xffff
data_14396f088.o = rax_30.o
int64_t rax_33 = data_143ce3888
int32_t var_20_5 = 0xffff0002
int16_t var_1c_5 = 0xffff
data_14396f098.o = rax_31.o
int64_t rax_34 = data_143ce3890
int32_t var_20_6 = 0xffff0002
int16_t var_1c_6 = 0xffff
data_14396f0a8.o = rax_32.o
int64_t rax_35 = data_143ce3898
int32_t var_20_7 = 0xffff0002
int16_t var_1c_7 = 0xffff
data_14396f0b8.o = rax_33.o
int64_t rax_36 = data_143ce38a8
int32_t var_20_8 = 0xffff0002
int16_t var_1c_8 = 0xffff
data_14396f0c8.o = rax_34.o
int32_t var_20_9 = 0xffff0002
data_14396f0d8.o = rax_35.o
int16_t var_1c_9 = 0xffff
data_14396f0e8.o = rax_36.o
int64_t rax_38 = data_143ce38b0
int32_t var_20_10 = 0xffff0002
int16_t var_1c_10 = 0xffff
int64_t rax_39 = data_143ce38c0
data_14396f0f8.o = data_143ce38a0.o
int32_t var_20_11 = 0xffff0002
int16_t var_1c_11 = 0xffff
int32_t var_20_12 = 0xffff0001
data_14396f108.o = rax_38.o
int16_t var_1c_12 = 0xffff
int32_t var_20_13 = 0xffff0001
data_14396f148.o = rax_39.o
int16_t var_1c_13 = 0xffff
data_14396f158.o = rax_28.o
int32_t var_20_14 = 0xffff0002
int16_t var_1c_14 = 0xffff
data_14396f300 = sub_140877850().o
void arg_8
sub_140812a70(&data_14396f170, &arg_8, &data_143ce38b8, nullptr)
sub_140812a70(&data_14396f170, &arg_8, &data_143ce3870, nullptr)
sub_140812a70(&data_14396f170, &arg_8, &data_143ce3880, nullptr)
sub_140812a70(&data_14396f170, &arg_8, &data_143ce3888, nullptr)
sub_140812a70(&data_14396f170, &arg_8, &data_143ce3890, nullptr)
sub_140812a70(&data_14396f170, &arg_8, &data_143ce3898, nullptr)
sub_140812a70(&data_14396f170, &arg_8, &data_143ce38a8, nullptr)
sub_140812a70(&data_14396f170, &arg_8, &data_143ce38a0, nullptr)
int64_t arg_10 = data_143ce3870
sub_140812a70(&data_14396f210, &arg_8, &arg_10, nullptr)
arg_10 = data_143ce3888
sub_140812a70(&data_14396f210, &arg_8, &arg_10, nullptr)
arg_10 = data_143ce3890
sub_140812a70(&data_14396f210, &arg_8, &arg_10, nullptr)
arg_10 = data_143ce3898
sub_140812a70(&data_14396f210, &arg_8, &arg_10, nullptr)
arg_10 = data_143ce38a8
sub_140812a70(&data_14396f210, &arg_8, &arg_10, nullptr)
arg_10 = data_143ce38a0
sub_140812a70(&data_14396f210, &arg_8, &arg_10, nullptr)
arg_10 = data_143ce3880
sub_140812a70(&data_14396f260, &arg_8, &arg_10, nullptr)
arg_10 = data_143ce3878
sub_140812a70(&data_14396f2b0, &arg_8, &arg_10, nullptr)
int64_t rax_49 = sx.q(data_143ce3a98)
int64_t rdi = data_143ce3880
bool cond:0 = rax_49.d + 1 s<= data_143ce3a9c
data_143ce3a98 = rax_49.d + 1

if (not(cond:0))
    sub_1405a4f90(&data_143ce3a90)

int64_t* rax_53 = (rax_49 << 4) + data_143ce3a90
*rax_53 = rdi
rax_53[1].d = 0xffff0002
*(rax_53 + 0xc) = 0xffff
int64_t rbx_15 = sx.q(data_143ce3a98)
int64_t rdi_1 = data_143ce3870
int32_t rax_54 = (rbx_15 + 1).d
bool cond:1 = rax_54 s<= data_143ce3a9c
data_143ce3a98 = rax_54

if (not(cond:1))
    sub_1405a4f90(&data_143ce3a90)

int64_t* rax_57 = (rbx_15 << 4) + data_143ce3a90
*rax_57 = rdi_1
rax_57[1].d = 0xffff0002
*(rax_57 + 0xc) = 0xffff
int64_t rbx_16 = sx.q(data_143ce3a98)
int64_t rdi_2 = data_143ce3888
int32_t rax_58 = (rbx_16 + 1).d
bool cond:2 = rax_58 s<= data_143ce3a9c
data_143ce3a98 = rax_58

if (not(cond:2))
    sub_1405a4f90(&data_143ce3a90)

int64_t* rax_61 = (rbx_16 << 4) + data_143ce3a90
*rax_61 = rdi_2
rax_61[1].d = 0xffff0002
*(rax_61 + 0xc) = 0xffff
int64_t rbx_17 = sx.q(data_143ce3a98)
int64_t rdi_3 = data_143ce3890
int32_t rax_62 = (rbx_17 + 1).d
bool cond:3 = rax_62 s<= data_143ce3a9c
data_143ce3a98 = rax_62

if (not(cond:3))
    sub_1405a4f90(&data_143ce3a90)

int64_t* rax_65 = (rbx_17 << 4) + data_143ce3a90
*rax_65 = rdi_3
rax_65[1].d = 0xffff0002
*(rax_65 + 0xc) = 0xffff
int64_t rbx_18 = sx.q(data_143ce3a98)
int64_t rdi_4 = data_143ce3898
int32_t rax_66 = (rbx_18 + 1).d
bool cond:4 = rax_66 s<= data_143ce3a9c
data_143ce3a98 = rax_66

if (not(cond:4))
    sub_1405a4f90(&data_143ce3a90)

int64_t* rax_69 = (rbx_18 << 4) + data_143ce3a90
*rax_69 = rdi_4
rax_69[1].d = 0xffff0002
*(rax_69 + 0xc) = 0xffff
int64_t rbx_19 = sx.q(data_143ce3a98)
int64_t rdi_5 = data_143ce38a8
int32_t rax_70 = (rbx_19 + 1).d
bool cond:5 = rax_70 s<= data_143ce3a9c
data_143ce3a98 = rax_70

if (not(cond:5))
    sub_1405a4f90(&data_143ce3a90)

int64_t* rax_73 = (rbx_19 << 4) + data_143ce3a90
*rax_73 = rdi_5
rax_73[1].d = 0xffff0002
*(rax_73 + 0xc) = 0xffff
int64_t rbx_20 = sx.q(data_143ce3a98)
int64_t rdi_6 = data_143ce38a0
int32_t rax_74 = (rbx_20 + 1).d
bool cond:6 = rax_74 s<= data_143ce3a9c
data_143ce3a98 = rax_74

if (not(cond:6))
    sub_1405a4f90(&data_143ce3a90)

int64_t* rax_77 = (rbx_20 << 4) + data_143ce3a90
*rax_77 = rdi_6
rax_77[1].d = 0xffff0002
*(rax_77 + 0xc) = 0xffff
sub_140812a70(&data_14396f1c0, &arg_8, &data_143ce3878, nullptr)
sub_140812a70(&data_14396f1c0, &arg_8, &data_143ce3880, nullptr)
sub_140812a70(&data_14396f1c0, &arg_8, &data_143ce3870, nullptr)
data_143ce38e0 = sub_14087e120()
data_143ce38e8 = sub_14087e160()
data_143ce38d0 = sub_14086c1e0()
data_143ce38d8 = sub_14086c180()
data_143ce38f0 = sub_14087e1e0()
data_143ce38f8 = sub_14087e1a0()
return sub_140835d70() __tailcall
