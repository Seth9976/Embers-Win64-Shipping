// 函数: sub_140abc420
// 地址: 0x140abc420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16* result_1 = arg1
wchar16* result

if (wcsncmp(arg1, u"INVTEXT", 7) != 0)
    wchar16** var_88 = &result_1
    sub_1405d9400()
    int64_t* var_60 = data_143cd6fd8
    int64_t* rcx_8 = data_143cd6fe0
    
    if (rcx_8 != 0)
        rcx_8[1].d += 1
    
    result = nullptr
    int32_t var_50_1 = 0
    
    if (sub_140a9c070(&var_88, &var_60) != 0)
        int64_t* rcx_10 = var_60
        int64_t* rax_9 = (*(*rcx_10 + 0x30))(rcx_10)
        int64_t* rcx_11 = var_60
        int64_t rdx_7 = *rcx_11
        char rax_10 = (*(rdx_7 + 8))(rcx_11, rdx_7)
        int64_t rdi_2 = *rax_9
        int64_t* rdi_3
        
        if (rax_10 == 0)
            wchar16* result_8 = result_1
            int128_t var_70 = zx.o(0)
            wchar16* result_6 = (*(rdi_2 + 0x38))(rax_9, result_8, arg3, arg4, &var_70)
            int64_t* rdi_4 = var_70:8.q
            result_1 = result_6
            
            if (result_6 != 0)
                if (rdi_4 != 0)
                    rdi_4[1].d -= 1
                    
                    if (rdi_4[1].d == 1)
                        (**rdi_4)(rdi_4)
                        int32_t rax_19 = *(rdi_4 + 0xc)
                        *(rdi_4 + 0xc) -= 1
                        
                        if (rax_19 == 1)
                            (*(*rdi_4 + 8))(rdi_4, 1)
                
                goto label_140abc6e4
            
            if (rdi_4 != 0)
                rdi_4[1].d -= 1
                
                if (rdi_4[1].d == 1)
                    (**rdi_4)(rdi_4)
                    int32_t rax_15 = *(rdi_4 + 0xc)
                    *(rdi_4 + 0xc) -= 1
                    
                    if (rax_15 == 1)
                        (*(*rdi_4 + 8))(rdi_4, 1)
            
            rdi_3 = rcx_8
        else
            int64_t* rcx_12 = var_60
            int64_t rax_12 = (*(*rcx_12 + 0x20))(rcx_12)
            wchar16* result_5 = (*(rdi_2 + 0x38))(rax_9, result_1, arg3, arg4, rax_12)
            result_1 = result_5
            
            if (result_5 != 0)
            label_140abc6e4:
                sub_140abd990(&var_60)
                int64_t* rcx_20 = *arg2
                result = result_1
                *arg2 = var_60
                rdi_3 = arg2[1]
                arg2[1] = rcx_8
                arg2[2].d = var_50_1
                var_60 = rcx_20
                int64_t* var_58_2 = rdi_3
            else
                rdi_3 = rcx_8
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                int64_t rdx_9 = *rdi_3
                (*rdx_9)(rdi_3, rdx_9)
                int32_t rbx_2 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (rbx_2 == 1)
                    int64_t r8_2 = *rdi_3
                    (*(r8_2 + 8))(rdi_3, zx.q(rbx_2), r8_2)
        
        return result
    
    if (rcx_8 != 0)
        rcx_8[1].d -= 1
        
        if (rcx_8[1].d == 1)
            (**rcx_8)(rcx_8)
            int32_t rbx_3 = *(rcx_8 + 0xc)
            *(rcx_8 + 0xc) -= 1
            
            if (rbx_3 == 1)
                (*(*rcx_8 + 8))(rcx_8, zx.q(rbx_3))
else
    wchar16* result_2 = &result_1[7]
    result_1 = result_2
    wchar16 i = *result_2
    
    if (i != 0)
        while (i == 9 || i == 0x20)
            i = result_2[1]
            result_2 = &result_2[1]
            
            if (i == 0)
                break
    
    result = nullptr
    
    if (result_2 != 0 && *result_2 != 0x28)
        result_2 = nullptr
    
    wchar16* result_7 = &result_2[1]
    
    if (result_2 == 0)
        result_7 = result_2
    
    result_1 = result_7
    
    if (result_7 != 0)
        int64_t rdx = 0
        int64_t var_78_1 = 0
        int64_t var_80 = 0
        wchar16 i_1 = *result_7
        
        if (i_1 != 0)
            while (i_1 == 9 || i_1 == 0x20)
                i_1 = result_7[1]
                result_7 = &result_7[1]
                
                if (i_1 == 0)
                    break
        
        result_1 = result_7
        
        if (result_7 != 0)
            void* result_3 = sub_140abd7c0(result_7, &var_80)
            result_1 = result_3
            
            if (result_3 != 0)
                int16_t* result_4 = sub_140ac5870(result_3, 0x29)
                result_1 = result_4
                
                if (result_4 != 0)
                    void var_48
                    int64_t* rax_2 = sub_140a9fb70(&var_48, &var_80)
                    int64_t rdx_3 = *arg2
                    *arg2 = *rax_2
                    *rax_2 = rdx_3
                    int64_t rdx_4 = arg2[1]
                    arg2[1] = rax_2[1]
                    rax_2[1] = rdx_4
                    arg2[2].d = rax_2[2].d
                    int64_t* var_40
                    
                    if (var_40 != 0)
                        var_40[1].d -= 1
                        
                        if (var_40[1].d == 1)
                            (**var_40)(var_40)
                            int32_t rbx_1 = *(var_40 + 0xc)
                            *(var_40 + 0xc) -= 1
                            
                            if (rbx_1 == 1)
                                (*(*var_40 + 8))(var_40, zx.q(rbx_1))
                    
                    result = result_1
            
            rdx = var_80
        
        if (rdx != 0)
            sub_140a74f90(rdx)
        
        return result
return nullptr
