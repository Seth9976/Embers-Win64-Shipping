// 函数: sub_1414ccdc0
// 地址: 0x1414ccdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg3)
int32_t rax_1 = (*(*arg1 + 0x168))()
void* r15 = &(*U"1111")[rbx]
char rax_2 = sub_1419803d0((*U"1111")[rbx])
char rax_3

if (rax_2 != 0)
    rax_3 = (*(arg2 + 0x60))()

void* var_48
void* var_40
void* var_38

if (rax_2 == 0 || rax_3 == 0 || rax_1 == 0)
    rbx.b = 0
else
    rbx.b = 1
    char var_50_1 = 1
    int32_t var_58_1 = 0
    void** rax_4
    int512_t zmm0
    rax_4, zmm0 = sub_142127800(arg1, &var_48, &data_143ee8f70, arg2, arg5)
    char var_50_2 = 1
    int64_t rcx_2 = rax_4[1]
    var_48 = *rax_4
    int64_t var_40_1 = rcx_2
    zmm0.o = var_48.o
    *arg6 = zmm0.o
    void** rax_7
    rax_7, arg5 = sub_142127800(arg1, &var_38, &data_143ee8e70, arg2, zmm0)
    void* rcx_4 = rax_7[1]
    var_48 = *rax_7
    var_40 = rcx_4
    arg5.o = var_48.o
    *arg4 = arg5.o

TEB* gsbase

if (data_143eed000 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    int64_t r8_1
    r8_1, arg5 = _Init_thread_header(&data_143eed000)
    
    if (data_143eed000 == 0xffffffff)
        int64_t* rcx_18 = data_143db18d0
        
        if (rcx_18 == 0)
            sub_140a53c40()
            rcx_18 = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_32 = (*(*rcx_18 + 0xb0))(rcx_18, u"r.ShaderPipelines", r8_1)
        int64_t rax_33
        
        if (rax_32 == 0)
            rax_33 = 0
        else
            int64_t rdx_11 = *rax_32
            rax_33 = (*(rdx_11 + 0x58))(rax_32, rdx_11)
        
        data_143eecff8 = rax_33
        arg5 = _Init_thread_footer(&data_143eed000)

int64_t rax_11 = sx.q(*r15)

if (rax_11.d u> 0x1e)
    if ((*(rax_11 * 0x14 + &data_143f025fc) & 1) != 0 || rbx.b != 0)
        goto label_1414ccf40
    
    goto label_1414ccef1

void** rax_13

if (test_bit(0x6562c800, rax_11.d) || (*(rax_11 * 0x14 + &data_143f025fc) & 1) != 0 || rbx.b != 0)
label_1414ccf40:
    arg5.o = zx.o(0)
    rax_13 = &var_48
    var_48.o = arg5.o
else
label_1414ccef1:
    int64_t rbx_1 = data_143eecff8
    
    if (rbx_1 == 0)
        goto label_1414ccf40
    
    int64_t rcx_8
    
    if (data_143de5480 == 0)
        rcx_8 = 0
    else
        rcx_8.b = GetCurrentThreadId() != data_143de5470
    
    if (*(rbx_1 + (rcx_8 << 2)) == 0)
        goto label_1414ccf40
    
    rax_13, arg5 = sub_142127b90(arg1, &var_38, &data_143ee9170, arg2, arg5, 0)

arg5.o = *rax_13
int64_t r9_3 = arg5.q
var_48.o = arg5.o

if (r9_3 == 0)
    char var_50_3 = 1
    int32_t var_58_2 = 0
    void** rax_25
    int512_t zmm0_1
    rax_25, zmm0_1 = sub_142127800(arg1, &var_38, &data_143ee8d70, arg2, arg5)
    char var_50_4 = 1
    int32_t var_58_3 = 0
    int64_t var_40_4 = rax_25[1]
    var_48 = *rax_25
    zmm0_1.o = var_48.o
    *arg7 = zmm0_1.o
    void** rax_28
    rax_28, arg5 = sub_142127800(arg1, &var_38, &data_143ee9070, arg2, zmm0_1)
    int64_t var_40_5 = rax_28[1]
    var_48 = *rax_28
else
    char rax_14 = data_143ee8db8
    void* rdx_3
    
    if (rax_14 u>= 5)
        rdx_3 = nullptr
    else
        uint64_t rax_15 = zx.q(rax_14)
        rdx_3 = *(r9_3 + (rax_15 << 3) + 8)
        
        if (rdx_3 == 0)
            rdx_3 = nullptr
        else
            if ((rdx_3.b & 1) != 0)
                rdx_3 = (rdx_3 s>> 1) + 8 + r9_3 + (rax_15 << 3)
            
            int64_t r10_2
            
            if ((*(rdx_3 + 0xf8) & 1) == 0)
                r10_2 = *(rdx_3 + 0xf8)
            else
                r10_2 = *(*(*(var_40 + 0x20) + 0x28) + (sx.q((*(rdx_3 + 0xf8) u>> 1).d) << 3))
            
            if (r10_2 != &data_143ee8d70)
                rdx_3 = nullptr
    
    var_48 = rdx_3
    void* var_40_2 = var_40
    arg5.o = var_48.o
    *arg7 = arg5.o
    char rax_20 = data_143ee90b8
    void* rdx_6
    
    if (rax_20 u>= 5)
        rdx_6 = nullptr
    else
        uint64_t rax_21 = zx.q(rax_20)
        rdx_6 = *(r9_3 + (rax_21 << 3) + 8)
        
        if (rdx_6 == 0)
            rdx_6 = nullptr
        else
            if ((rdx_6.b & 1) != 0)
                rdx_6 = (rdx_6 s>> 1) + 8 + r9_3 + (rax_21 << 3)
            
            int64_t r9_4
            
            if ((*(rdx_6 + 0xf8) & 1) == 0)
                r9_4 = *(rdx_6 + 0xf8)
            else
                r9_4 = *(*(*(var_40 + 0x20) + 0x28) + (sx.q((*(rdx_6 + 0xf8) u>> 1).d) << 3))
            
            if (r9_4 != &data_143ee9070)
                rdx_6 = nullptr
    
    var_48 = rdx_6
    void* var_40_3 = var_40

arg5.o = var_48.o
*arg8 = arg5.o
return arg8
