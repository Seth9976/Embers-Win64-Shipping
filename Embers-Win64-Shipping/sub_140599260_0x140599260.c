// 函数: sub_140599260
// 地址: 0x140599260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_143ddb400
uint64_t var_28 = 0
int32_t var_20 = 0
int16_t* const rdi = &data_142d40450
int16_t* var_18
int32_t var_10

if (sub_140af5b90(rcx, u"LogFiles", u"LogTimes", &var_28, &data_143de5780) != 0)
    int16_t* const rcx_1 = &data_142d40450
    
    if (var_20 != 0)
        rcx_1 = var_28
    
    if (sub_140a54510(rcx_1, u"None") != 0)
        int16_t* const rcx_5 = &data_142d40450
        
        if (var_20 != 0)
            rcx_5 = var_28
        
        if (sub_140a54510(rcx_5, &data_142d42690) == 0)
            sub_1405a55d0(data_143cd5ad8, 1, 0x4000000)
        else
            int16_t* const rcx_6 = &data_142d40450
            
            if (var_20 != 0)
                rcx_6 = var_28
            
            int32_t rax_4 = sub_140a54510(rcx_6, u"SinceStart")
            
            if (rax_4 != 0)
                int16_t* const rcx_7 = &data_142d40450
                
                if (var_20 != 0)
                    rcx_7 = var_28
                
                int32_t rax_5 = sub_140a54510(rcx_7, u"Local")
                
                if (rax_5 != 0)
                    int16_t* const rcx_8 = &data_142d40450
                    
                    if (var_20 != 0)
                        rcx_8 = var_28
                    
                    int32_t rax_6 = sub_140a54510(rcx_8, u"Timecode")
                    
                    if (rax_6 != 0)
                        int16_t* const rcx_9 = &data_142d40450
                        
                        if (var_20 != 0)
                            rcx_9 = var_28
                        
                        if (sub_140b16cc0(rcx_9) != 0)
                            sub_1405a55d0(data_143cd5ad8, 1, 0x4000000)
                    else
                        sub_1405a55d0(data_143cd5ad8, rax_6 + 4, 0x4000000)
                else
                    sub_1405a55d0(data_143cd5ad8, rax_5 + 3, 0x4000000)
            else
                sub_1405a55d0(data_143cd5ad8, rax_4 + 2, 0x4000000)
    else
        int64_t* rbx_1 = data_143cd5ad8
        sub_140a2e390(&var_18, u"%d", 0)
        int16_t* const rdx_1 = &data_142d40450
        
        if (var_10 != 0)
            rdx_1 = var_18
        
        (*(*rbx_1 + 0x80))(rbx_1, rdx_1, 0x4000000)
        int16_t* rcx_4 = var_18
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)

sub_140af2b60()
char result

if (sub_140b21a10(&data_143dbb3f0, u"LOGTIMES") == 0)
    sub_140af2b60()
    
    if (sub_140b21a10(&data_143dbb3f0, u"UTCLOGTIMES") == 0)
        sub_140af2b60()
        
        if (sub_140b21a10(&data_143dbb3f0, u"NOLOGTIMES") == 0)
            sub_140af2b60()
            
            if (sub_140b21a10(&data_143dbb3f0, u"LOGTIMESINCESTART") == 0)
                sub_140af2b60()
                
                if (sub_140b21a10(&data_143dbb3f0, u"LOCALLOGTIMES") == 0)
                    sub_140af2b60()
                    result = sub_140b21a10(&data_143dbb3f0, u"LOGTIMECODE")
                    
                    if (result != 0)
                        result = sub_1405a55d0(data_143cd5ad8, 4, 0x7000000)
                else
                    result = sub_1405a55d0(data_143cd5ad8, 3, 0x7000000)
            else
                result = sub_1405a55d0(data_143cd5ad8, 2, 0x7000000)
        else
            result = sub_1405a55d0(data_143cd5ad8, 0, 0x7000000)
    else
        int64_t* rbx_3 = data_143cd5ad8
        sub_140a2e390(&var_18, u"%d", 1)
        
        if (var_10 != 0)
            rdi = var_18
        
        result = (*(*rbx_3 + 0x80))(rbx_3, rdi, 0x7000000)
        int16_t* rcx_16 = var_18
        
        if (rcx_16 != 0)
            result = sub_140a74f90(rcx_16)
else
    int64_t* rbx_2 = data_143cd5ad8
    sub_140a2e390(&var_18, u"%d", 1)
    
    if (var_10 != 0)
        rdi = var_18
    
    result = (*(*rbx_2 + 0x80))(rbx_2, rdi, 0x7000000)
    int16_t* rcx_13 = var_18
    
    if (rcx_13 != 0)
        result = sub_140a74f90(rcx_13)

uint64_t rcx_18 = var_28

if (rcx_18 == 0)
    return result

return sub_140a74f90(rcx_18)
