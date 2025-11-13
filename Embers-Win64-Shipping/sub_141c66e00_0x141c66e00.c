// 函数: sub_141c66e00
// 地址: 0x141c66e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
*(arg1 + 0x178) = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0 f- *(arg1 + 0x168)
sub_141c69700(arg1 - 0x7b0)
sub_141c589d0(*(arg1 + 0x2e0))
int64_t* rax = *(arg1 + 0x30)
int64_t* rdi = rax[1]
void* rbx = *rax

if (rdi != 0)
    *(rdi + 0xc) += 1

int32_t rbp = data_143f34a18
sub_140b34200("Submixes", rbp)
int32_t* rsi = nullptr

if (rdi != 0)
    int32_t rax_1 = 0
    bool z_1
    
    if (0 == rdi[1].d)
        rdi[1].d = 0
        z_1 = true
    else
        rax_1 = rdi[1].d
        z_1 = false
    
    if (not(z_1))
        bool z_3
        
        do
            bool z_2
            
            if (rax_1 == rdi[1].d)
                rdi[1].d = rax_1 + 1
                z_2 = true
            else
                rdi[1].d
                z_2 = false
            
            if (z_2)
                if (rbx != 0)
                    sub_141c67b00(rbx, arg2)
                
                rdi[1].d -= 1
                
                if (rdi[1].d == 1)
                    (**rdi)(rdi)
                    int32_t rax_5 = *(rdi + 0xc)
                    *(rdi + 0xc) -= 1
                    
                    if (rax_5 == 1)
                        (*(*rdi + 8))(rdi, 1)
                
                break
            
            rax_1 = 0
            
            if (0 == rdi[1].d)
                rdi[1].d = 0
                z_3 = true
            else
                rax_1 = rdi[1].d
                z_3 = false
        while (not(z_3))

sub_140b38680("Submixes", rbp)
int32_t rax_7 = data_143f34a18
sub_140b34200("EndpointSubmixes", rax_7)
EnterCriticalSection(arg1 + 0x240)
int64_t* i = *(arg1 + 0x220)

for (void* rbp_3 = &i[sx.q(*(arg1 + 0x228)) * 2]; i != rbp_3; i = &i[2])
    void* rcx_8 = *i
    
    if (*(rcx_8 + 0x18) != 0)
        void* rdx_4 = *(rcx_8 + 0x20)
        
        if (rdx_4 != 0)
            if (0 == *(rdx_4 + 8))
                *(rdx_4 + 8) = 0
            else
                *(rdx_4 + 8)
            
            rcx_8 = *i
    
    sub_141c67b00(rcx_8, arg2)

int64_t* i_1 = *(arg1 + 0x230)

for (void* rbp_6 = &i_1[sx.q(*(arg1 + 0x238)) * 2]; i_1 != rbp_6; i_1 = &i_1[2])
    void* rcx_9 = *i_1
    
    if (*(rcx_9 + 0x18) != 0)
        void* rdx_6 = *(rcx_9 + 0x20)
        
        if (rdx_6 != 0)
            if (0 == *(rdx_6 + 8))
                *(rdx_6 + 8) = 0
            else
                *(rdx_6 + 8)
            
            rcx_9 = *i_1
    
    sub_141c69060(rcx_9)

if (arg1 != -0x240)
    LeaveCriticalSection(arg1 + 0x240)

sub_140b38680("EndpointSubmixes", rax_7)
void* r14 = *(arg1 + 0x2e0)
int32_t i_2 = 0
int32_t zmm6 = (zx.o(0)).d
uint32_t result

if (*(r14 + 0x1ac) s> 0)
    int64_t rbx_2 = 0
    
    do
        int64_t rcx_11 = *(r14 + 0xc8)
        char rdx_8 = *(rbx_2 + rcx_11 + 0x3d1)
        
        if ((rdx_8 & 0x10) == 0)
            result = zx.d(*(rbx_2 + rcx_11 + 0x3d0))
            
            if ((result.b & 0x20) != 0 && not(zmm6 f!= *(rbx_2 + rcx_11 + 0x100)))
                result.b &= 0xdf
                *(rbx_2 + rcx_11 + 0x3d0) = result.b
                *(rbx_2 + rcx_11 + 0x3d1) = rdx_8 | 0x10
                int64_t* rcx_12 = *(rbx_2 + rcx_11 + 0x10)
                (*(*rcx_12 + 0x10))(rcx_12)
        
        i_2 += 1
        rbx_2 += 0x3f0
    while (i_2 s< *(r14 + 0x1ac))

if (*(arg1 + 0x300) != 0)
    uint64_t i_5 = zx.q(*(arg1 + 0x12c))
    int64_t r12_1 = sx.q(*(arg1 + 0x1a8))
    TEB* gsbase
    void* r14_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
    
    if (data_143f35068 s> *(r14_1 + 0x14))
        _Init_thread_header(&data_143f35068)
        
        if (data_143f35068 == 0xffffffff)
            int32_t var_58_2 = zmm6
            zmm6 = sub_141c30d50(&data_143f35040, *(arg1 + 0x1ac), 0x43dc0000)
            atexit(sub_142cf71f0)
            _Init_thread_footer(&data_143f35068)
    
    if (data_143f35098 s> *(r14_1 + 0x14))
        _Init_thread_header(&data_143f35098)
        
        if (data_143f35098 == 0xffffffff)
            int32_t var_58_1 = zmm6
            sub_141c30d50(&data_143f35070, *(arg1 + 0x1ac), 0x435c0000)
            atexit(sub_142cf7200)
            _Init_thread_footer(&data_143f35098)
    
    if (i_5.d s> 0)
        uint64_t i_4 = i_5
        uint64_t i_3
        
        do
            int64_t rbx_3 = *arg2
            double zmm0_1
            zmm0_1.d = sub_141c407e0(&data_143f35040).d f+ *(rsi + rbx_3)
            *(rsi + rbx_3) = zmm0_1.d
            
            if (r12_1.d s> 1)
                int64_t rbx_4 = *arg2
                zmm0_1.d = sub_141c407e0(&data_143f35070).d f+ *(rsi + rbx_4 + 4)
                *(rsi + rbx_4 + 4) = zmm0_1.d
            
            rsi = &rsi[r12_1]
            i_3 = i_4
            i_4 -= 1
        while (i_3 != 1)

*(arg1 + 0x158) = *(arg1 + 0x150) f+ *(arg1 + 0x158)

if (rdi != 0)
    int32_t r12_2 = *(rdi + 0xc)
    *(rdi + 0xc) -= 1
    
    if (r12_2 == 1)
        (*(*rdi + 8))(rdi, zx.q(r12_2))

result.b = 1
return result
