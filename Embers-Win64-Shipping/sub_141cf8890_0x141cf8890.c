// 函数: sub_141cf8890
// 地址: 0x141cf8890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14321d350
int64_t r9 = EnterCriticalSection(&arg1[0x24])

if (arg1[0x11].d - *(arg1 + 0xb4) s> 0 || arg1[0x29].d s> 0)
    sub_140af98a0("Unknown", 0xe75, 
        LiveRequests.Num or NumLiveRawReqeusts was > 0 in ~FPakAsyncReadFileHandle!", r9)
    sub_140afbb40()

int64_t* r14 = arg1[0x1a]
int64_t rbp = 0
uint64_t r15_1 = sx.q(arg1[0x1b].d) << 3 u>> 3

if (r14 u> &r14[arg1[0x1b]])
    r15_1 = 0

if (r15_1 != 0)
    do
        int64_t* rdi_1 = *r14
        
        if (rdi_1 != 0)
            *rdi_1 = 0
            int64_t* rcx_1 = rdi_1[3]
            rdi_1[3] = 0
            
            if (rcx_1 != 0)
                rcx_1[9].d -= 1
                
                if (rcx_1[9].d == 1)
                    sub_140a2f6e0(rcx_1)
            
            int64_t rcx_2 = rdi_1[1]
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
                rdi_1[1] = 0
            
            int64_t rcx_3 = rdi_1[2]
            rdi_1[4].d = 0
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
                rdi_1[2] = 0
            
            rdi_1[5].d = 0
            *(rdi_1 + 0x34) = 0
            int64_t* rcx_4 = rdi_1[3]
            
            if (rcx_4 != 0)
                rcx_4[9].d -= 1
                
                if (rcx_4[9].d == 1)
                    sub_140a2f6e0(rcx_4)
            
            j_sub_140a74f90(rdi_1)
        
        r14 = &r14[1]
        rbp += 1
    while (rbp != r15_1)

if (arg1 != -0x120)
    LeaveCriticalSection(&arg1[0x24])

sub_1405ae080(&arg1[0x2e])
DeleteCriticalSection(&arg1[0x24])

if (arg1[0x1c] != 0)
    void* rax_6 = arg1[0x1e]
    void* rcx_9 = &arg1[0x20]
    
    if (rax_6 != 0)
        rcx_9 = rax_6
    
    (*(*rcx_9 + 0x10))(rcx_9)

int64_t rcx_10 = arg1[0x1a]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

arg1[0x19].d = 0
int64_t rcx_11 = arg1[0x18]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

arg1[0x11].d = 0

if (*(arg1 + 0x8c) != 0)
    sub_1405a5410(&arg1[0x10], 0)

arg1[0x16].d = 0xffffffff
*(arg1 + 0xb4) = 0
sub_14059a8e0(&arg1[0x12], 0)
int64_t rcx_14 = arg1[0x14]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = arg1[0x10]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

sub_140a1d5c0(&arg1[0xc])
*arg1 = &data_142e5d0f8
return &data_142e5d0f8
