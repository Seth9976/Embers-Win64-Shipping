// 函数: ?StealUnrealizedChore@ScheduleGroupSegmentBase@details@Concurrency@@IEAAPEAV_UnrealizedChore@23@_N@Z
// 地址: 0x140ff5a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
*(arg1 + 0x40e8) += 1
int64_t rsi = 0
int64_t* rbx = *(arg1 + 0x2678)
*(arg1 + 0x2678) = 0

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        char rax_3
        
        if (rbx[2].b == 0 && data_143f0f1d0 == 0)
            rax_3 = sub_1405949a0()
        
        if (rbx[2].b != 0 || (data_143f0f1d0 == 0 && rax_3 != 0))
            (**rbx)(rbx, 1)
        else
            bool z_1
            
            if (0 == *(rbx + 0xc))
                *(rbx + 0xc) = 1
                z_1 = true
            else
                *(rbx + 0xc)
                z_1 = false
            
            if (z_1)
                sub_1405dcc10(&data_143f02390, rbx)

int64_t* rcx_1 = *(arg1 + 0x27b0)
*(arg1 + 0x27b0) = 0

if (rcx_1 != 0)
    (*(*rcx_1 + 0x10))(rcx_1)

int64_t* rcx_2 = *(arg1 + 0x27a8)
*(arg1 + 0x27a8) = 0

if (rcx_2 != 0)
    (*(*rcx_2 + 0x10))(rcx_2)

*(arg1 + 0x43b8) = 0x22
int64_t* rcx_3 = *(arg1 + 0x26d0)
*(arg1 + 0x26d0) = 0

if (rcx_3 != 0)
    (*(*rcx_3 + 0x10))(rcx_3)

void* rbx_1 = arg1 + 0x26d8
int64_t i_2 = 7
int64_t i

do
    int64_t* rcx_4 = *rbx_1
    *rbx_1 = 0
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x10))(rcx_4)
    
    rbx_1 += 8
    i = i_2
    i_2 -= 1
while (i != 1)
sub_140fddb20(arg1 - 0x18)
sub_140fdeef0(arg1 - 0x18)

if (*(arg1 + 0x1990) != 0)
    int64_t* rcx_7 = *(arg1 + 0x170)
    *(arg1 + 0x1990) = 0
    (*(*rcx_7 + 0x58))(rcx_7, 0, 0, 0)

int32_t i_1 = 0
int64_t var_60
__builtin_memset(&var_60, 0, 0x20)
int64_t r14 = 0x1a10
*(arg1 + 0x1d88) = var_60.o
int64_t var_50
*(arg1 + 0x1d98) = var_50.o
int32_t* var_98
int32_t* var_90

do
    int32_t var_88 = 0
    int32_t var_80 = 0
    int64_t var_70 = 0
    
    if (*(r14 + arg1 + 0x158) != 0 || *(r14 + arg1 + 0x164) != 0 || *(r14 + arg1 + 0x160) != 0)
        *(r14 + arg1 + 0x158) = 0
        var_90 = &var_88
        *(r14 + arg1 + 0x160) = 0
        int64_t* rcx_8 = *(arg1 + 0x170)
        var_98 = &var_80
        (*(*rcx_8 + 0x90))(rcx_8, zx.q(i_1), 1, &var_70, var_98, var_90)
    
    i_1 += 1
    r14 += 0x10
while (i_1 u< 0x10)

if (*(arg1 + 0x25e8) != 0 || *(arg1 + 0x1d68) != 0 || *(arg1 + 0x1d70) != 0x39
        || *(arg1 + 0x1d74) != 0)
    int64_t* rcx_9 = *(arg1 + 0x170)
    *(arg1 + 0x1d68) = 0
    *(arg1 + 0x1d70) = 0x39
    (*(*rcx_9 + 0x98))(rcx_9, 0, 0x39, 0, var_98, var_90)

*(arg1 + 0x40b8) = 0
memset(arg1 + 0x3fb8, 0, 0x100)
*(arg1 + 0x40d8) = 0xffffffff

if (*(arg1 + 0x19b0) != 0)
    int64_t* rcx_11 = *(arg1 + 0x170)
    *(arg1 + 0x19b0) = 0
    (*(*rcx_11 + 0x48))(rcx_11, 0, 0, 0, var_98, var_90)

if (*(arg1 + 0x1998) != 0)
    int64_t* rcx_12 = *(arg1 + 0x170)
    *(arg1 + 0x1998) = 0
    (*(*rcx_12 + 0x1e0))(rcx_12, 0, 0, 0, var_98, var_90)

if (*(arg1 + 0x19a0) != 0)
    int64_t* rcx_13 = *(arg1 + 0x170)
    *(arg1 + 0x19a0) = 0
    (*(*rcx_13 + 0x200))(rcx_13, 0, 0, 0, var_98, var_90)

if (*(arg1 + 0x19a8) != 0)
    int64_t* rcx_14 = *(arg1 + 0x170)
    *(arg1 + 0x19a8) = 0
    (*(*rcx_14 + 0xb8))(rcx_14, 0, 0, 0, var_98, var_90)

uint32_t result
result.b = 1

if (arg3 != 0)
    result = sub_140fed4d0(arg2, arg4)

if (data_1439c7a38 == 1)
    if (result.b != 0)
        TEB* gsbase
        
        if (data_143e2c160
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143e2c160)
            
            if (data_143e2c160 == 0xffffffff)
                int64_t* rcx_25 = data_143db18d0
                
                if (rcx_25 == 0)
                    sub_140a53c40()
                    rcx_25 = data_143db18d0
                
                int64_t r8
                r8.b = 1
                int64_t* rax_22 = (*(*rcx_25 + 0xb0))(rcx_25, u"r.FinishCurrentFrame", r8)
                
                if (rax_22 != 0)
                    int64_t rdx_3 = *rax_22
                    rsi = (*(rdx_3 + 0x58))(rax_22, rdx_3)
                
                data_143e2c158 = rsi
                _Init_thread_footer(&data_143e2c160)
        
        if (*(data_143e2c158 + 4) != 0)
            sub_140feb5b0(arg2 + 0x90)
            result = sub_140fff1f0(arg2 + 0x90)
        else
            sub_140fff1f0(arg2 + 0x90)
            result = sub_140feb5b0(arg2 + 0x90)
    
    if (data_1439c90fa != 0)
        sub_140fff1f0(arg2 + 0x90)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        result = performanceCount.d - data_1439c90fc
        data_1439c9100 = result
        data_1439c90fa = 0

__security_check_cookie(rax_1 ^ &var_b8)
return result
