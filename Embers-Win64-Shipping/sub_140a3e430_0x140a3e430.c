// 函数: sub_140a3e430
// 地址: 0x140a3e430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = arg3
int64_t* result_7 = arg1
EnterCriticalSection(&arg1[0x1a])
int32_t r15 = 0
int64_t var_58 = 0
int32_t rdx = 0
int32_t var_50 = 0
int64_t r13 = 0
int32_t var_4c = 0
int32_t r8 = 0
int64_t rsi = -1

if (arg2 != 0 && *arg2 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg2[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_58, rdi_1.d + 1)
        r8 = var_4c
        rdx = var_50
        r13 = var_58
    
    int32_t rax_1 = rdi_1.d + 1 + rdx
    int32_t var_50_1 = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_58)
        r13 = var_58
    
    memcpy(r13, arg2, (rdi_1.d + 1) * 2)

int64_t* arg_10 = &result_7[1]
sub_140a45180(&result_7[1], &result_7, &var_58)
int64_t rax_4 = sx.q(result_7.d)
int64_t rdi_4

if (rax_4.d != 0xffffffff)
    rdi_4 = rax_4 << 5

int64_t* rdi_6

if (rax_4.d == 0xffffffff || rdi_4 == neg.q(*arg_10))
    rdi_6 = nullptr
else
    rdi_6 = *(rdi_4 + *arg_10 + 0x10)

if (r13 != 0)
    sub_140a74f90(r13)

(*(*arg3 + 0x18))(arg3)

if (((*(*arg3 + 0x18))(arg3) & 0x20) != 0)
    (*(*arg3 + 0x70))(arg3)

int64_t* result

if (rdi_6 == 0)
    var_58 = 0
    int32_t rcx_39 = 0
    int32_t var_4c_3 = 0
    int32_t var_50_6 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        do
            rsi += 1
        while (arg2[rsi] != 0)
        
        if (rsi.d + 1 s> 0)
            sub_1405947f0(&var_58, rsi.d + 1)
            rcx_39 = var_4c_3
            r15 = var_50_6
        
        int32_t rax_37 = r15 + rsi.d + 1
        int32_t var_50_7 = rax_37
        
        if (rax_37 s> rcx_39)
            sub_140594770(&var_58)
        
        memcpy(var_58, arg2, (rsi.d + 1) * 2)
    
    sub_140a3a380(arg_10, &var_58, &result_1)
    int64_t rcx_44 = var_58
    
    if (rcx_44 != 0)
        sub_140a74f90(rcx_44)
    
    result = result_1
else
    if ((*(*rdi_6 + 0x28))(rdi_6) != 0)
        (*(*rdi_6 + 0x18))(rdi_6)
    
    int64_t* result_2 = (*(*rdi_6 + 0x28))(rdi_6)
    int64_t rdx_4 = *rdi_6
    int64_t* rax_14 = (*(rdx_4 + 0x70))(rdi_6, rdx_4)
    int32_t rdi_7 = 1
    
    if (result_2 == 0)
        result_7.d = 1
    else
        int32_t rax_15
        rax_15.b = rax_14 != 0
        result_7.d = rax_15 + 2
    
    int64_t* result_3 = (*(*arg3 + 0x28))(arg3)
    int64_t* result_6 = result_1
    result = result_3
    int64_t* result_4 = (*(*result_6 + 0x70))(result_6)
    result_1 = result_4
    
    if (result != 0)
        int32_t rdi_8
        rdi_8.b = result_4 != 0
        rdi_7 = rdi_8 + 2
    
    if (result_7.d != rdi_7)
        sub_140af98a0("Unknown", 0x5e6, 
            Console object named '%s' can't be replaced with the new one of different type!", arg2)
        sub_140afbb40()
        result_4 = result_1
    
    if (result_2 != 0 && result != 0)
        bool cond:2_1 = (((*(*result_2 + 0x18))(result_2) u>> 4).b & 1) == 0
        int64_t rax_22 = *result
        
        if (cond:2_1)
            (*(*result_2 + 0x20))(result_2, zx.q((*(rax_22 + 0x18))(result)))
            (*(*result_2 + 0x10))(result_2, (*(*result + 8))(result))
            (*(*result + 0x78))(result)
            result = result_2
        else
            if (((*(rax_22 + 0x18))(result) & 1) == 0)
                int64_t* rax_25 = (*(*result_2 + 0xa0))(result_2, &var_58)
                int64_t* result_5
                
                if (rax_25[1].d == 0)
                    result_5 = &data_142d40450
                else
                    result_5 = *rax_25
                
                int64_t rdi_9 = *result
                result_1 = result_5
                int32_t rax_27 = (*(*result_2 + 0x18))(result_2)
                (*(rdi_9 + 0x80))(result, result_1, zx.q(rax_27) & 0xff000000)
                int64_t rcx_20 = var_58
                
                if (rcx_20 != 0)
                    sub_140a74f90(rcx_20)
            
            (*(*result_2 + 0x78))(result_2)
            result_1 = result
            int32_t rcx_22 = 0
            int32_t var_4c_1 = 0
            var_58 = 0
            int32_t var_50_2 = 0
            
            if (arg2 != 0 && *arg2 != 0)
                do
                    rsi += 1
                while (arg2[rsi] != 0)
                
                if (rsi.d + 1 s> 0)
                    sub_1405947f0(&var_58, rsi.d + 1)
                    rcx_22 = var_4c_1
                    r15 = var_50_2
                
                int32_t rax_30 = r15 + rsi.d + 1
                int32_t var_50_3 = rax_30
                
                if (rax_30 s> rcx_22)
                    sub_140594770(&var_58)
                
                memcpy(var_58, arg2, (rsi.d + 1) * 2)
            
            sub_140a3a380(arg_10, &var_58, &result_1)
            int64_t rcx_27 = var_58
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
    else if (rax_14 == 0)
        result = nullptr
    else
        result_7 = result_4
        int32_t rcx_32 = 0
        int32_t var_4c_2 = 0
        var_58 = 0
        int32_t var_50_4 = 0
        
        if (arg2 != 0 && *arg2 != 0)
            do
                rsi += 1
            while (arg2[rsi] != 0)
            
            if (rsi.d + 1 s> 0)
                sub_1405947f0(&var_58, rsi.d + 1)
                rcx_32 = var_4c_2
                r15 = var_50_4
            
            int32_t rax_35 = r15 + rsi.d + 1
            int32_t var_50_5 = rax_35
            
            if (rax_35 s> rcx_32)
                sub_140594770(&var_58)
            
            memcpy(var_58, arg2, (rsi.d + 1) * 2)
        
        sub_140a3a380(arg_10, &var_58, &result_7)
        int64_t rcx_37 = var_58
        
        if (rcx_37 != 0)
            sub_140a74f90(rcx_37)
        
        (*(*rax_14 + 0x78))(rax_14)
        result = result_1

if (arg1 != -0xd0)
    LeaveCriticalSection(&arg1[0x1a])

return result
