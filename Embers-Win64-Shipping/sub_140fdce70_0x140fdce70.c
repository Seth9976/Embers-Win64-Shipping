// 函数: sub_140fdce70
// 地址: 0x140fdce70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
void* rbx = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
arg1[4] = 0

if (data_143e2c0f8 s> *(rbx + 0x14))
    _Init_thread_header(&data_143e2c0f8)
    
    if (data_143e2c0f8 == 0xffffffff)
        int64_t* rcx_9 = data_143db18d0
        
        if (rcx_9 == 0)
            sub_140a53c40()
            rcx_9 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        int64_t* rax_18 = (*(*rcx_9 + 0xb0))(rcx_9, u"r.gpucrash.collectionenable", r8_2)
        int64_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0
        else
            int64_t rdx_1 = *rax_18
            rax_19 = (*(rdx_1 + 0x58))(rax_18, rdx_1)
        
        data_143e2c0f0 = rax_19
        _Init_thread_footer(&data_143e2c0f8)

if (data_143e2c108 s> *(rbx + 0x14))
    _Init_thread_header(&data_143e2c108)
    
    if (data_143e2c108 == 0xffffffff)
        int64_t* rcx_11 = data_143db18d0
        
        if (rcx_11 == 0)
            sub_140a53c40()
            rcx_11 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_21 = (*(*rcx_11 + 0xb0))(rcx_11, u"r.gpucrash.datadepth", r8_3)
        int64_t rax_16
        
        if (rax_21 == 0)
            rax_16 = 0
        else
            int64_t rdx_2 = *rax_21
            rax_16 = (*(rdx_2 + 0x58))(rax_21, rdx_2)
        
        data_143e2c100 = rax_16
        _Init_thread_footer(&data_143e2c108)

int64_t rcx = data_143e2c0f0
bool rax_3 = false

if (rcx != 0)
    rax_3 = *(rcx + 4) != 0

*(arg1 + 9) = rax_3
void* rax_4 = data_143e2c100
int32_t rcx_1

if (rax_4 == 0)
    rcx_1 = -1
else
    rcx_1 = *(rax_4 + 4)

*(arg1 + 0x14) = rcx_1
*(arg1 + 0xa) = data_143f0f1f4
char rax_6 = data_143f0f1f5
*(arg1 + 0xb) = rax_6

if (rax_6 != 0)
    *(arg1 + 0xa) = 0
    
    if (*(arg1 + 0xc) != 0 || rax_6 == 0)
        goto label_140fdcf38
    
    goto label_140fdcf2f

if (*(arg1 + 0xa) != 0 || (*(arg1 + 0xc) == 0 && rax_6 != 0))
label_140fdcf2f:
    *(arg1 + 0xd) = sub_140af3aa0()
    
    if (*(arg1 + 0xa) == 0)
        goto label_140fdcf38
    
    if (*(arg1 + 0xb) == 0)
    label_140fdcf78:
        rcx_1.b = 1
        sub_140b00890(rcx_1.b)
        arg1[1].b = 1
        void*** rax_10 = j_sub_140a82f30(0x78)
        void*** rsi_1 = rax_10
        
        if (rax_10 == 0)
            rsi_1 = nullptr
        else
            rax_10[1] = 0
            rax_10[2] = 0
            *rsi_1 = &data_142ef5c98
            rsi_1[4].d = 0xffffffff
            *(rsi_1 + 0x24) = 4
            rsi_1[3] = &data_142ef5bf8
            rsi_1[5] = arg2
            rsi_1[6].d = 1
            *(rsi_1 + 0x34) = 0xffffffff
            rsi_1[7].d = 0
            __builtin_memset(&rsi_1[8], 0, 0x11)
            rsi_1[0xc].d = 0xffffffff
            *(rsi_1 + 0x64) = 4
            rsi_1[0xb] = &data_142ef5c38
            rsi_1[0xd] = 0
            rsi_1[0xe] = arg2
            rsi_1[3][1]()
            rsi_1[0xb][1](&rsi_1[0xb])
        
        arg1[3] = rsi_1
        (*rsi_1)[1](rsi_1)
    else
    label_140fdcf67:
        int32_t rax_8 = arg1[2].d
        
        if (rax_8 == 0)
            goto label_140fdcf78
        
        arg1[2].d = rax_8 - 1
else
label_140fdcf38:
    
    if (*(arg1 + 0xb) != 0)
        goto label_140fdcf67
    
    if (*(arg1 + 0xc) != 0)
        sub_140e0f7b0(&arg1[0xf], 0)
        sub_140b00890(*(arg1 + 0xd))

*(arg1 + 0xc) = *(arg1 + 0xb)

if (data_1439c7a38 == 1)
    sub_140ffd700(&arg1[6])

char result = sub_140af3aa0()

if (result == 0)
    return result

int32_t arg_8 = 0xff00ff00
jump(*(*arg1 + 0x10))
