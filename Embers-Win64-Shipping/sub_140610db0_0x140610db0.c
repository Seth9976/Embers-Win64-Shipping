// 函数: sub_140610db0
// 地址: 0x140610db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = arg3 + arg4

if (arg3 s>= result)
label_140610e1b:
    int64_t rdx_1 = arg1[3]
    
    if (rdx_1 u< 0x10)
        goto label_140610e55
    
    void* rcx_1 = *arg1
    
    if (rdx_1 + 1 u< 0x1000)
        goto label_140610e50
    
    void* r8 = *(rcx_1 - 8)
    
    if (rcx_1 - r8 - 8 u<= 0x1f)
        rcx_1 = r8
    label_140610e50:
        j_sub_140a74f90(rcx_1)
    label_140610e55:
        arg1[2] = 0
        arg1[3] = 0xf
        *arg1 = 0
        int64_t rdx_3 = arg2[3]
        
        if (rdx_3 u< 0x10)
            goto label_140610ea2
        
        void* rcx_3 = *arg2
        
        if (rdx_3 + 1 u< 0x1000)
            goto label_140610e9d
        
        void* r8_1 = *(rcx_3 - 8)
        
        if (rcx_3 - r8_1 - 8 u<= 0x1f)
            rcx_3 = r8_1
        label_140610e9d:
            j_sub_140a74f90(rcx_3)
        label_140610ea2:
            result.b = 1
        label_140610ea4:
            *arg2 = 0
            arg2[3] = 0xf
            arg2[2] = 0
            return result
    
label_140610f54:
    _invalid_parameter_noinfo_noreturn()
    noreturn

int64_t rcx = sx.q(arg3)

while (true)
    int64_t rdx_5
    
    if (rcx s>= sx.q(arg1[2].d) || arg3 s>= arg2[2].d)
        int64_t rdx_6 = arg1[3]
        
        if (rdx_6 u>= 0x10)
            rdx_5 = rdx_6 + 1
        label_140610edb:
            void* rcx_5 = *arg1
            
            if (rdx_5 u>= 0x1000)
                void* r8_2 = *(rcx_5 - 8)
                
                if (rcx_5 - r8_2 - 8 u> 0x1f)
                    goto label_140610f54
                
                rcx_5 = r8_2
            
            j_sub_140a74f90(rcx_5)
    else
        int64_t r9 = arg1[3]
        int64_t* rdx = arg1
        
        if (r9 u>= 0x10)
            rdx = *arg1
        
        int64_t* rax = arg2
        
        if (arg2[3] u>= 0x10)
            rax = *arg2
        
        if (*(rcx + rdx) == *(rcx + rax))
            arg3 += 1
            rcx += 1
            
            if (rcx s>= sx.q(result))
                goto label_140610e1b
            
            continue
        else if (r9 u>= 0x10)
            rdx_5 = r9 + 1
            goto label_140610edb
    arg1[2] = 0
    arg1[3] = 0xf
    *arg1 = 0
    int64_t rdx_7 = arg2[3]
    
    if (rdx_7 u>= 0x10)
        void* rcx_7 = *arg2
        
        if (rdx_7 + 1 u>= 0x1000)
            void* r8_3 = *(rcx_7 - 8)
            
            if (rcx_7 - r8_3 - 8 u> 0x1f)
                goto label_140610f54
            
            rcx_7 = r8_3
        
        j_sub_140a74f90(rcx_7)
    
    result.b = 0
    break

goto label_140610ea4
