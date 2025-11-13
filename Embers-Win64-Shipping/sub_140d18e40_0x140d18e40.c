// 函数: sub_140d18e40
// 地址: 0x140d18e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* lpCriticalSection
uint64_t rsi_2
uint64_t r9_1

if (arg1[3].b != 0 && arg1[2] s> 0)
    lpCriticalSection = &arg1[0xc]
    EnterCriticalSection(lpCriticalSection)
    r9_1 = zx.q(arg1[2])
    rsi_2 = zx.q(arg1[1] + 1)
    arg1[1] = rsi_2.d
    int32_t rcx_1 = r9_1.d
    int32_t rax = rsi_2.d
    
    if (rsi_2.d s>= r9_1.d && *arg1 s>= 0)
        sub_140af98a0("Unknown", 0xce, 
            Unable to add more objects to disregard for GC pool (Max: %d)", r9_1)
        r9_1 = sub_140afbb40()
        rcx_1 = arg1[2]
        rax = arg1[1]
    
    if (rax s>= rcx_1)
        int32_t rax_1
        rax_1, r9_1 = sub_140d18080(&arg1[4], 1)
        rcx_1 = arg1[2]
        rsi_2 = zx.q(rax_1)
        rax = arg1[1]
    
    int32_t rax_2 = rax + 1
    
    if (rcx_1 s>= rax_2)
        rax_2 = rcx_1
    
    arg1[2] = rax_2
    goto label_140d18f33

int32_t rax_3 = sub_140a2d3e0(&arg1[0x16])

if (rax_3 != 0)
    rsi_2 = *(*(&data_143cf0bf8 + (zx.q(rax_3) u>> 0xe << 3)) + (zx.q(rax_3) & 0x3fff) * 0x18 + 8)
    r9_1 = sub_140a24050(rax_3)

if (rax_3 == 0 || rsi_2 == 0)
    lpCriticalSection = &arg1[0xc]
    EnterCriticalSection(lpCriticalSection)
    int32_t rax_4
    rax_4, r9_1 = sub_140d18080(&arg1[4], 1)
    rsi_2 = zx.q(rax_4)
label_140d18f33:
    
    if (lpCriticalSection != 0)
        r9_1 = LeaveCriticalSection(lpCriticalSection)

int16_t temp0
int32_t temp1
temp0:temp1 = sx.q(rsi_2.d)
uint32_t rdx_4 = zx.d(temp0)
int32_t rax_7 = temp1 + rdx_4
void** r14 = sx.q(rax_7 s>> 0x10) << 3
void** r15 = sx.q(zx.d(rax_7.w) - rdx_4) * 0x18
int64_t rdx_6 = *(r14 + *(arg1 + 0x10))
bool z

if (0 == *(r15 + rdx_6))
    *(r15 + rdx_6) = arg2
    z = true
else
    *(r15 + rdx_6)
    z = false

if (not(z))
    sub_140af98a0("Unknown", 0xf4, u"Unexpected concurency while adding new object", r9_1)
    sub_140afbb40()

int32_t i = 0
void* result

if (rsi_2.d s>= arg1[9])
    result = nullptr
else
    result = *(r14 + *(arg1 + 0x10)) + r15

*(result + 8) = 0
*(result + 0x10) = 0
*(arg2 + 0xc) = rsi_2.d

if (arg1[0x3a] s> 0)
    int64_t* r14_1 = nullptr
    
    do
        int64_t* rcx_14 = *(r14_1 + *(arg1 + 0xe0))
        result = (*(*rcx_14 + 8))(rcx_14, arg2, zx.q(rsi_2.d))
        i += 1
        r14_1 = &r14_1[1]
    while (i s< arg1[0x3a])

return result
