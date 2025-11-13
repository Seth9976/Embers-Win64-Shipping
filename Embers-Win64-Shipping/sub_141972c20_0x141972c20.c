// 函数: sub_141972c20
// 地址: 0x141972c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143f02028)
int32_t rax = sub_140b212b0(arg1, *(arg1 + 0x80) << 3, 0)
void* rdi = nullptr
bool cond:0 = data_1439c8248 == data_1439c8274
int64_t r9 = sx.q(rax)
int32_t arg_8 = r9.d
void* rax_2

if (cond:0)
label_141972cca:
    rax_2 = nullptr
else
    void* rdx_3 = data_1439c8280
    void* rcx_1 = &data_1439c8278
    
    if (rdx_3 != 0)
        rcx_1 = rdx_3
    
    int32_t rax_1 = *(rcx_1 + (((sx.q(data_1439c8288) - 1) & r9) << 2))
    
    if (rax_1 == 0xffffffff)
    label_141972cca_1:
        rax_2 = nullptr
    else
        int64_t r8_4 = data_1439c8240
        int32_t* rdx_5
        
        while (true)
            rdx_5 = sx.q(rax_1) * 0x18
            
            if (*(rdx_5 + r8_4) == r9.d)
                break
            
            rax_1 = *(rdx_5 + r8_4 + 0x10)
            
            if (rax_1 == 0xffffffff)
                goto label_141972cca_2
        
        rax_2 = rdx_5 + r8_4
        
        if (rax_1 == 0xffffffff)
        label_141972cca_2:
            rax_2 = nullptr

void* rbx = rax_2 + 8

if (rax_2 == 0)
    rbx = nullptr

int64_t* result

if (rbx == 0)
    int64_t* rcx_3 = data_143f0f180
    int64_t* result_1
    (*(*rcx_3 + 0x48))(rcx_3, &result_1, arg1)
    int64_t* result_3 = result_1
    result_3[1].d += 1
    int64_t* result_2 = result_1
    sub_141000b00(&data_1439c8240, &arg_8, &result_2)
    result = result_1
    
    if (result != 0)
        result[1].d -= 1
        
        if (result[1].d == 1)
            if (result[2].b == 0)
                bool z_1
                
                if (0 == *(result + 0xc))
                    *(result + 0xc) = 1
                    z_1 = true
                else
                    *(result + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_8 = sub_140a20af0()
                    
                    if (rax_8 != 0)
                        rdi = *(&data_143cf0bf8 + (zx.q(rax_8) u>> 0xe << 3))
                            + (zx.q(rax_8) & 0x3fff) * 0x18
                    
                    *(rdi + 8) = result
                    sub_1405a42f0(&data_143f02390, rax_8)
            else if (result != 0)
                (**result)(result, 1)
else
    result = *rbx

LeaveCriticalSection(&data_143f02028)
return result
