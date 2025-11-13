// 函数: sub_141c62780
// 地址: 0x141c62780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x9f0)

if (arg2 != 0)
    void* rax_1 = sub_1425a21c0()
    void* r8 = *(arg2 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    int64_t* rax_4
    void* rdi_1
    
    if (rax_2.d s> *(r8 + 0x38) || *(*(r8 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        void* rax_5 = sub_1425a2650()
        void* rdx = *(arg2 + 0x10)
        int64_t rax_6 = sx.q(*(rax_5 + 0x38))
        
        if (rax_6.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_6 << 3)) == rax_5 + 0x30)
            rdi_1 = *arg3
            rax_4, arg5 = sub_142367a40(arg2)
            *(rdi_1 + 0x130) = rax_4
    else
        rdi_1 = *arg3
        rax_4, arg5 = sub_142367a50(arg2)
        *(rdi_1 + 0x130) = rax_4

int64_t* i = *(arg1 + 0x9d0)
int64_t r8_2 = sx.q(*(arg1 + 0x9d8))

for (; i != &i[r8_2 * 2]; i = &i[2])
    if (*i == *arg3)
        int32_t j = 0
        
        if (r8_2.d s> 0)
            int64_t* rsi_1 = nullptr
            
            do
                if (*(rsi_1 + *(arg1 + 0x9d0)) == *arg3)
                    sub_140dbb060(arg1 + 0x9d0, j, 1, 1)
                    j -= 1
                    rsi_1 -= 0x10
                
                j += 1
                rsi_1 = &rsi_1[2]
            while (j s< *(arg1 + 0x9d8))
        
        break

int64_t* i_1 = *(arg1 + 0x9e0)
int64_t r8_3 = sx.q(*(arg1 + 0x9e8))

for (; i_1 != &i_1[r8_3 * 2]; i_1 = &i_1[2])
    if (*i_1 == *arg3)
        int32_t j_1 = 0
        
        if (r8_3.d s> 0)
            int64_t* rsi_2 = nullptr
            
            do
                if (*(rsi_2 + *(arg1 + 0x9e0)) == *arg3)
                    sub_140dbb060(arg1 + 0x9e0, j_1, 1, 1)
                    j_1 -= 1
                    rsi_2 -= 0x10
                
                j_1 += 1
                rsi_2 = &rsi_2[2]
            while (j_1 s< *(arg1 + 0x9e8))
        
        break

sub_141c61470(*arg3, arg2, arg4, arg5)
int64_t result

if (arg2 == 0)
    result.b = 0
else
    void* rax_10 = sub_1425a2500()
    void* rdx_6 = *(arg2 + 0x10)
    int64_t rax_11 = sx.q(*(rax_10 + 0x38))
    
    if (rax_11.d s> *(rdx_6 + 0x38) || *(*(rdx_6 + 0x30) + (rax_11 << 3)) != rax_10 + 0x30)
        void* rax_12 = sub_1425a2650()
        void* rdx_7 = *(arg2 + 0x10)
        result = sx.q(*(rax_12 + 0x38))
        
        if (result.d s> *(rdx_7 + 0x38))
            result.b = 0
        else if (*(*(rdx_7 + 0x30) + (result << 3)) != rax_12 + 0x30)
            result.b = 0
        else
            result.b = 1
    else
        result.b = 1

int64_t* rcx_22

if (result.b != 0)
    void* rcx_18 = *arg3
    void* rdx_8
    
    if (*(rcx_18 + 0x18) != 0)
        rdx_8 = *(rcx_18 + 0x20)
    
    if (*(rcx_18 + 0x18) != 0 && rdx_8 != 0)
        result = 0
        
        if (0 == *(rdx_8 + 8))
            *(rdx_8 + 8) = 0
        else
            result = zx.q(*(rdx_8 + 8))
        
        if (result.d s> 0 || *(rcx_18 + 0x1e0) != 0 || *(rcx_18 + 0x1d8) != 0)
            result.b = 0
        else
            result.b = 1
    else if (*(rcx_18 + 0x1e0) != 0 || *(rcx_18 + 0x1d8) != 0)
        result.b = 0
    else
        result.b = 1
    
    if (result.b != 0)
        int64_t rdi_2 = sx.q(*(arg1 + 0x9d8))
        int32_t rax_13 = (rdi_2 + 1).d
        *(arg1 + 0x9d8) = rax_13
        
        if (rax_13 s> *(arg1 + 0x9dc))
            sub_1405a4f90(arg1 + 0x9d0)
        
        rcx_22 = (rdi_2 << 4) + *(arg1 + 0x9d0)
        goto label_141c62a4e

void* rcx_23 = *arg3
void* rdx_10

if (*(rcx_23 + 0x18) != 0)
    rdx_10 = *(rcx_23 + 0x20)

if (*(rcx_23 + 0x18) != 0 && rdx_10 != 0)
    result = 0
    
    if (0 == *(rdx_10 + 8))
        *(rdx_10 + 8) = 0
    else
        result = zx.q(*(rdx_10 + 8))
    
    if (result.d s> 0 || (*(rcx_23 + 0x1e0) == 0 && *(rcx_23 + 0x1d8) == 0))
        result.b = 0
    else
        result.b = 1
else if (*(rcx_23 + 0x1e0) != 0 || *(rcx_23 + 0x1d8) != 0)
    result.b = 1
else
    result.b = 0

if (result.b != 0)
    int64_t rdi_3 = sx.q(*(arg1 + 0x9e8))
    int32_t rax_14 = (rdi_3 + 1).d
    *(arg1 + 0x9e8) = rax_14
    
    if (rax_14 s> *(arg1 + 0x9ec))
        sub_1405a4f90(arg1 + 0x9e0)
    
    rcx_22 = (rdi_3 << 4) + *(arg1 + 0x9e0)
label_141c62a4e:
    *rcx_22 = *arg3
    result = arg3[1]
    rcx_22[1] = result
    
    if (result != 0)
        *(result + 8) += 1

if (arg1 != -0x9f0)
    result = LeaveCriticalSection(arg1 + 0x9f0)

int64_t* rbx_1 = arg3[1]

if (rbx_1 != 0)
    result = zx.q(rbx_1[1].d)
    rbx_1[1].d -= 1
    
    if (result.d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t rdi_4 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_4 == 1)
            return (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_4))

return result
