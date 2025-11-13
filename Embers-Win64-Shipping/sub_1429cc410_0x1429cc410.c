// 函数: sub_1429cc410
// 地址: 0x1429cc410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
int64_t* rsi = arg3

if (*(arg3 + 0x19) == 0)
    int64_t* rax_1 = arg3[2]
    
    if (*(rax_1 + 0x19) != 0)
        int64_t* rax_3 = arg3[1]
        
        if (*(rax_3 + 0x19) == 0)
            while (arg3 == rax_3[2])
                arg_18 = rax_3
                arg3 = rax_3
                rax_3 = rax_3[1]
                
                if (*(rax_3 + 0x19) != 0)
                    break
        
        arg3 = rax_3
        arg_18 = rax_3
    else
        arg3 = rax_1
        void** rax_2 = *rax_1
        
        while (*(rax_2 + 0x19) == 0)
            arg3 = rax_2
            rax_2 = *rax_2
        
        arg_18 = arg3

int64_t* i_5 = *rsi
int64_t* i_1
int64_t* i_3

if (*(i_5 + 0x19) == 0)
    if (*(rsi[2] + 0x19) != 0)
        i_3 = i_5
        goto label_1429cc4ba
    
    i_3 = arg3[2]
    
    if (arg3 == rsi)
        goto label_1429cc4ba
    
    i_5[1] = arg3
    *arg3 = *rsi
    
    if (arg3 != rsi[2])
        i_1 = arg3[1]
        
        if (*(i_3 + 0x19) == 0)
            i_3[1] = i_1
        
        *i_1 = i_3
        arg3[2] = rsi[2]
        *(rsi[2] + 8) = arg3
    else
        i_1 = arg3
    
    void* rax_9 = *arg1
    
    if (*(rax_9 + 8) != rsi)
        int64_t* rax_10 = rsi[1]
        
        if (*rax_10 != rsi)
            rax_10[2] = arg3
        else
            *rax_10 = arg3
    else
        *(rax_9 + 8) = arg3
    
    arg3[1] = rsi[1]
    arg3[3].b = rsi[3].b
    rsi[3].b = arg3[3].b
else
    i_3 = rsi[2]
label_1429cc4ba:
    i_1 = rsi[1]
    
    if (*(i_3 + 0x19) == 0)
        i_3[1] = i_1
    
    void* rax_5 = *arg1
    
    if (*(rax_5 + 8) == rsi)
        *(rax_5 + 8) = i_3
    else if (*i_1 != rsi)
        i_1[2] = i_3
    else
        *i_1 = i_3
    
    int64_t* rdx = *arg1
    
    if (*rdx == rsi)
        int64_t* i_2
        
        if (*(i_3 + 0x19) == 0)
            void** i_4 = *i_3
            i_2 = i_3
            
            while (*(i_4 + 0x19) == 0)
                i_2 = i_4
                i_4 = *i_4
        else
            i_2 = i_1
        
        *rdx = i_2
    
    void* rdx_1 = *arg1
    
    if (*(rdx_1 + 0x10) == rsi)
        if (*(i_3 + 0x19) == 0)
            int64_t* i_7 = i_3[2]
            int64_t* i_6 = i_3
            
            while (*(i_7 + 0x19) == 0)
                i_6 = i_7
                i_7 = i_7[2]
            
            *(rdx_1 + 0x10) = i_6
        else
            *(rdx_1 + 0x10) = i_1

if (rsi[3].b == 1)
    if (i_3 != *(*arg1 + 8))
        int64_t* i
        
        do
            i = i_1
            
            if (i_3[3].b != 1)
                break
            
            int64_t* rcx_2 = *i_1
            
            if (i_3 != rcx_2)
                if (rcx_2[3].b == 0)
                    rcx_2[3].b = 1
                    void* rcx_6 = *i_1
                    i_1[3].b = 0
                    *i_1 = *(rcx_6 + 0x10)
                    void* rax_26 = *(rcx_6 + 0x10)
                    
                    if (*(rax_26 + 0x19) == 0)
                        *(rax_26 + 8) = i_1
                    
                    *(rcx_6 + 8) = i_1[1]
                    void* rax_28 = *arg1
                    
                    if (i_1 != *(rax_28 + 8))
                        void** rax_29 = i_1[1]
                        
                        if (i_1 != rax_29[2])
                            *rax_29 = rcx_6
                        else
                            rax_29[2] = rcx_6
                    else
                        *(rax_28 + 8) = rcx_6
                    
                    *(rcx_6 + 0x10) = i_1
                    i_1[1] = rcx_6
                    rcx_2 = *i_1
                
                if (*(rcx_2 + 0x19) == 0)
                    if (*(rcx_2[2] + 0x18) != 1 || *(*rcx_2 + 0x18) != 1)
                        if (*(*rcx_2 + 0x18) == 1)
                            *(rcx_2[2] + 0x18) = 1
                            rcx_2[3].b = 0
                            std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* __ptr64 const,struct xec732bf3::pair::operator[]::_Mutex_count_pair> > >::_Lrotate(
                                arg1, rcx_2)
                            rcx_2 = *i_1
                        
                        rcx_2[3].b = i_1[3].b
                        i_1[3].b = 1
                        *(*rcx_2 + 0x18) = 1
                        std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* __ptr64 const,struct xec732bf3::pair::operator[]::_Mutex_count_pair> > >::_Rrotate(
                            arg1, i_1)
                        break
                    
                    rcx_2[3].b = 0
            else
                rcx_2 = i_1[2]
                
                if (rcx_2[3].b == 0)
                    rcx_2[3].b = 1
                    int64_t* rcx_3 = i_1[2]
                    i_1[3].b = 0
                    i_1[2] = *rcx_3
                    int64_t rax_15 = *rcx_3
                    
                    if (*(rax_15 + 0x19) == 0)
                        *(rax_15 + 8) = i_1
                    
                    rcx_3[1] = i_1[1]
                    void* rax_17 = *arg1
                    
                    if (i_1 != *(rax_17 + 8))
                        int64_t** rax_18 = i_1[1]
                        
                        if (i_1 != *rax_18)
                            rax_18[2] = rcx_3
                        else
                            *rax_18 = rcx_3
                    else
                        *(rax_17 + 8) = rcx_3
                    
                    *rcx_3 = i_1
                    i_1[1] = rcx_3
                    rcx_2 = i_1[2]
                
                if (*(rcx_2 + 0x19) == 0)
                    if (*(*rcx_2 + 0x18) != 1 || *(rcx_2[2] + 0x18) != 1)
                        if (*(rcx_2[2] + 0x18) == 1)
                            *(*rcx_2 + 0x18) = 1
                            rcx_2[3].b = 0
                            std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* __ptr64 const,struct xec732bf3::pair::operator[]::_Mutex_count_pair> > >::_Rrotate(
                                arg1, rcx_2)
                            rcx_2 = i_1[2]
                        
                        rcx_2[3].b = i_1[3].b
                        i_1[3].b = 1
                        *(rcx_2[2] + 0x18) = 1
                        std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<void* __ptr64 const,struct xec732bf3::pair::operator[]::_Mutex_count_pair> > >::_Lrotate(
                            arg1, i_1)
                        break
                    
                    rcx_2[3].b = 0
            
            i_3 = i_1
            i_1 = i_1[1]
        while (i != *(*arg1 + 8))
    
    i_3[3].b = 1

void* rcx_10 = rsi[5]

if (rcx_10 != 0)
    int64_t rax_39 = (rsi[7] - rcx_10) s>> 2
    
    if (rax_39 u> 0x3fffffffffffffff)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (rax_39 << 2 u>= 0x1000)
        if ((rcx_10.b & 0x1f) != 0)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rax_41 = *(rcx_10 - 8)
        
        if (rax_41 u>= rcx_10)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        void* rcx_9 = rcx_10 - rax_41
        
        if (rcx_9 u< 8)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        if (rcx_9 u> 0x27)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_10 = rax_41
    
    j_sub_140a74f90(rcx_10)
    __builtin_memset(&rsi[5], 0, 0x18)

j_sub_140a74f90(rsi)
int64_t rax_42 = arg1[1]

if (rax_42 != 0)
    arg1[1] = rax_42 - 1

*arg2 = arg_18
return arg2
