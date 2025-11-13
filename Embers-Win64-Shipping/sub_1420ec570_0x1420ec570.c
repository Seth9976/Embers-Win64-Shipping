// 函数: sub_1420ec570
// 地址: 0x1420ec570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0xa0) s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        int64_t* rcx = *(rdi_1 + *(arg1 + 0x98))
        
        if (rcx != 0 && (*(rcx + 0x5b) & 0x20) == 0)
            (*(*rcx + 0x478))(rcx)
        
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< *(arg1 + 0xa0))

uint64_t result = sub_1424385d0(*(arg1 + 0xb8))
int64_t** r14 = nullptr
char arg_8 = result.b
int32_t r13 = 0
int64_t** var_48 = nullptr
int32_t i_4 = 0
int32_t var_3c = 0
int32_t i_1 = 0
char rdi_2 = result.b

if (*(arg1 + 0xa0) s> 0)
    int64_t* r12_1 = nullptr
    int64_t rdx
    
    do
        result = *(arg1 + 0x98)
        int64_t* rbx = *(r12_1 + result)
        
        if (rbx != 0 && (*(rbx + 0x5b) & 0x20) == 0)
            sub_141dcd710(rbx)
            result, rdx = (*(*rbx + 0x480))(rbx)
            
            if ((*(rbx + 0x5b) & 0x20) == 0)
                int32_t rax_4 = *(rbx + 0xc)
                void* const rax_8
                
                if (rax_4 s>= data_143e1d9b4)
                    rax_8 = nullptr
                else
                    uint32_t rdx_1 = zx.d(rax_4.w)
                    
                    if (rax_4 s< 0)
                        rax_4 += 0xffff
                        rdx_1 -= 0x10000
                    
                    rax_8 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(rdx_1) * 0x18
                
                result = zx.q(*(rax_8 + 8) u>> 0x1d)
                
                if ((result.b & 1) == 0)
                    int64_t var_38
                    int64_t* rax_10 = sub_140d21830(rbx, &var_38, 0, 0)
                    int16_t* const r9_1
                    
                    if (rax_10[1].d == 0)
                        r9_1 = &data_142d40450
                    else
                        r9_1 = *rax_10
                    
                    sub_140af98a0("Unknown", 0x75b, 
                        %s failed to route PostInitializeComponents.  Please call Super::"
                    "PostInitializeComponents() in your <className>::PostInitializeComponents() "
                    "function. ", r9_1)
                    int64_t rcx_7 = var_38
                    
                    if (rcx_7 != 0)
                        sub_140a74f90(rcx_7)
                    
                    result, rdx = sub_140afbb40()
            
            if (rdi_2 != 0)
                result, rdx = sub_141dcdf70(rbx)
                
                if (result.b == 0)
                    int64_t i_5 = sx.q(i_4)
                    i_4 = (i_5 + 1).d
                    
                    if (i_4 s> r13)
                        result, rdx = sub_1405a4d70(&var_48)
                        r13 = var_3c
                        r14 = var_48
                    
                    r14[i_5] = rbx
                    rdi_2 = arg_8
        
        i_1 += 1
        r12_1 = &r12_1[1]
    while (i_1 s< *(arg1 + 0xa0))
    
    if (i_4 s> 0)
        int64_t** rbx_1 = r14
        uint64_t i_3 = zx.q(i_4)
        uint64_t i_2
        
        do
            rdx.b = 1
            result, rdx = sub_141dbf290(*rbx_1, rdx)
            rbx_1 = &rbx_1[1]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
    
    if (r14 != 0)
        return sub_140a74f90(r14)

return result
