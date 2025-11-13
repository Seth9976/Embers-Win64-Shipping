// 函数: sub_1428c65c0
// 地址: 0x1428c65c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
__chkstk(0x28)
void* rax = *(arg4 + 0x18)
int64_t* r10 = arg1

if (rax != 0)
    int64_t rax_1 = *(rax + 0x30)
    
    if (rax_1 != 0)
        return rax_1()

char rax_3 = *arg4
int32_t rcx_1

if (rax_3 != 0 || *(arg4 + 4) != 1)
    void* rcx = *arg1
    
    if (rcx == 0)
        return 0xffffffff
    
    if (rax_3 == 5)
        rcx_1 = *(rcx + 4)
        *arg3 = rcx_1
    label_1428c6636:
        char* rcx_5
        uint32_t count
        
        if (rcx_1 - 1 u> 9)
        label_1428c6705:
            uint32_t* rax_11 = *r10
            
            if (*(arg4 + 0x20) == 0x800 && (rax_11[4].b & 0x10) != 0)
                if (arg2 != 0)
                    *(rax_11 + 8) = arg2
                    *rax_11 = 0
                
                return 0xfffffffe
            
            rcx_5 = *(rax_11 + 8)
            count = *rax_11
        else
            switch (rcx_1)
                case 1
                    int32_t rax_8 = *r10
                    
                    if (rax_8 == 0xffffffff)
                        return 0xffffffff
                    
                    char rcx_6 = rax_8.b
                    
                    if (*(arg4 + 4) != 0xfffffffc)
                        if (rax_8 != 0 && *(arg4 + 0x20) s> 0)
                            return 0xffffffff
                        
                        rcx_6 = rax_8.b
                        
                        if (rax_8 == 0)
                            rcx_6 = 0
                            
                            if (*(arg4 + 0x20) == rax_8)
                                return 0xffffffff
                    
                    char arg_20 = rcx_6
                    count = 1
                    rcx_5 = &arg_20
                case 2, 0xa
                    int64_t* rdx_1 = &arg_10
                    
                    if (arg2 == 0)
                        rdx_1 = nullptr
                    
                    return sub_1428e5210(*r10, rdx_1)
                case 3
                    int64_t* rdx = &arg_10
                    
                    if (arg2 == 0)
                        rdx = nullptr
                    
                    return sub_14291c320(*r10, rdx)
                case 4, 7, 8, 9
                    goto label_1428c6705
                case 5
                    rcx_5 = nullptr
                    count = 0
                case 6
                    void* rax_6 = *r10
                    rcx_5 = *(rax_6 + 0x18)
                    count = *(rax_6 + 0x14)
                    
                    if (rcx_5 == 0 || count == 0)
                        return 0xffffffff
        
        if (arg2 != 0 && count != 0)
            memcpy(arg2, rcx_5, count)
        
        return zx.q(count)

if (*(arg4 + 4) != 0xfffffffc)
    rcx_1 = *arg3
    goto label_1428c6636

int32_t* rax_4 = *r10
rcx_1 = *rax_4
r10 = &rax_4[2]
*arg3 = rcx_1
goto label_1428c6636
