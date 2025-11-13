// 函数: sub_140d25240
// 地址: 0x140d25240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
int32_t r13 = data_143e1d720
int64_t r15 = arg4
sub_140b34200("MakeUniqueObjectName", r13)
char rax = sub_140b5b8a0(r15.d, 0)

if ((arg_20:4.d == 0 & rax) == 0)
    int64_t var_58_1 = r15
else
    r15 = *(arg3 + 0x18)
    int64_t var_60_1 = r15

uint64_t rcx_1 = zx.q(data_14401b1a0)
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
*arg1 = 0
int32_t* r12_1 = *(ThreadLocalStoragePointer + (rcx_1 << 3)) + 0x14

while (true)
    if (data_143e1d980 s> *r12_1)
        _Init_thread_header(&data_143e1d980)
        
        if (data_143e1d980 == 0xffffffff)
            void arg_10
            data_143e1d978.d = *sub_140b5e500(&arg_10, 0xcf)
            data_143e1d978:4.d = 0
            _Init_thread_footer(&data_143e1d980)
    
    int64_t rax_8
    
    if (r15 != data_143e1d978)
        int32_t rax_11
        
        if (arg2 - 1 u> -3)
            int32_t rcx_9 = *(arg3 + 0xc8)
            int32_t rax_15 = (((rcx_9 + 1) ^ rcx_9) & 0x7fffffff) ^ rcx_9
            *(arg3 + 0xc8) = rax_15
            rax_11 = rax_15 & 0x7fffffff
        else if (data_14399f9f8 == 0)
            arg_20.b = 0
            int64_t* var_68_1 = &arg_20
            int64_t (* var_70)(int64_t, int32_t* arg2) = sub_140d19300
            rax_11 = sub_140d32720(arg2, arg3, &var_70)
        else
            int32_t rax_10 = data_1439aad80
            data_1439aad80 -= 1
            rax_11 = rax_10 - 1
        
        int32_t var_8c_1 = rax_11
        rax_8 = r15.d.q
        goto label_140d2545c
    
    int32_t rax_2 = *(arg3 + 0xc8)
    int32_t rbx_4 = (((rax_2 + 1) ^ rax_2) & 0x7fffffff) ^ rax_2
    *(arg3 + 0xc8) = rbx_4
    void* rbx_6
    
    if (arg2 != 0)
        int32_t var_94_1 = rbx_4 & 0x7fffffff
        void var_88
        rax_8 = (*sub_140b5e500(&var_88, 0xef)).q
    label_140d2545c:
        *arg1 = rax_8
        
        if (arg2 != -1)
            rbx_6 = sub_140d3f470(nullptr, arg2, *arg1, 0, 0, 0, 0)
        else
            int64_t var_48
            int64_t* rax_16 = sub_140b63b70(arg1, &var_48)
            int16_t* r8_5
            
            if (rax_16[1].d == 0)
                r8_5 = &data_142d40450
            else
                r8_5 = *rax_16
            
            void* rax_17 = sub_140d2ee50(nullptr, -ffffffffffffffff, r8_5, 0)
            int64_t rcx_11 = var_48
            rbx_6 = rax_17
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
    else
        int16_t* var_80
        sub_140a2e390(&var_80, u"/Temp/%s", sub_140b5fcb0(0xef))
        int16_t* const rdx_1 = &data_142d40450
        int32_t var_78
        
        if (var_78 != arg2.d)
            rdx_1 = var_80
        
        void var_50
        *arg1 = *sub_140b581d0(&var_50, rdx_1, rbx_4 & 0x7fffffff, (arg2 + 1).d)
        int16_t* rcx_5 = var_80
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        rbx_6 = sub_140d3f470(nullptr, arg2, *arg1, 0, 0, 0, 0)
    
    if (rbx_6 == 0)
        if (*arg1 != r15)
            break

sub_140b38680("MakeUniqueObjectName", r13)
return arg1
