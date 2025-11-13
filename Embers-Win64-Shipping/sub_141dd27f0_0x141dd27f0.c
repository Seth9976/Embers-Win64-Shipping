// 函数: sub_141dd27f0
// 地址: 0x141dd27f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int32_t i_1 = 0
arg1[0x14] = 0
arg1[0x1b] = 0
(*(rax + 0x3a0))()
TEB* gsbase
int32_t* r15_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
int64_t var_28
void arg_8

if (data_143f38dc0 s> *r15_1)
    _Init_thread_header(&data_143f38dc0)
    
    if (data_143f38dc0 == 0xffffffff)
        void* rax_9 = sub_142452380()
        sub_142452380()
        int64_t* rax_10 = sub_140b58260(&arg_8, u"ReplicatedMovement", 1)
        sub_140b63b70(rax_10, &var_28)
        int64_t rcx_9 = var_28
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        data_143f38db8 = sub_1408f7ec0(rax_9, *rax_10)
        _Init_thread_footer(&data_143f38dc0)

void* rcx = data_143f38db8
int32_t i = 0

if (*(rcx + 0x38) s> 0)
    do
        (**arg2)(arg2, arg1, *(rcx + 0x48) + i.w, arg1[0xb].b u>> 4 & 1)
        rcx = data_143f38db8
        i += 1
    while (i s< *(rcx + 0x38))

uint64_t result = zx.q(*r15_1)
int64_t r9

if (data_143f38dd0 s> result.d)
    result, r9 = _Init_thread_header(&data_143f38dd0)
    
    if (data_143f38dd0 == 0xffffffff)
        void* rax_12 = sub_142452380()
        sub_142452380()
        int64_t* rax_13 = sub_140b58260(&arg_8, u"AttachmentReplication", 1)
        sub_140b63b70(rax_13, &var_28)
        int64_t rcx_13 = var_28
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        data_143f38dc8 = sub_1408f7ec0(rax_12, *rax_13)
        result, r9 = _Init_thread_footer(&data_143f38dd0)

void* rcx_2 = data_143f38dc8

if (*(rcx_2 + 0x38) s> 0)
    do
        void* rax_4 = arg1[0x26]
        
        if (rax_4 == 0 || (*(rax_4 + 0x88) & 0x10) != 0)
            r9 = 0
        else
            r9.b = 1
        
        result, r9 = (**arg2)(arg2, arg1, *(rcx_2 + 0x48) + i_1.w, r9)
        rcx_2 = data_143f38dc8
        i_1 += 1
    while (i_1 s< *(rcx_2 + 0x38))

int64_t* rdi = arg1[2]

if (rdi != 0)
    void* rax_6 = sub_14247bf70()
    void* rcx_4 = rdi[2]
    result = sx.q(*(rax_6 + 0x38))
    
    if (result.d s<= *(rcx_4 + 0x38))
        uint64_t result_1 = result
        result = *(rcx_4 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax_6 + 0x30)
            return (*(*rdi + 0x3a0))(rdi, arg1, arg2)

return result
